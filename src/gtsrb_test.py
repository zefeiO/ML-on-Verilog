import os
import torch
import torch.nn as nn
import numpy as np
from PIL import Image
import pickle
import qonnx
import qonnx.core.onnx_exec as oxe
from qonnx.core.modelwrapper import ModelWrapper
from qonnx.transformation.infer_shapes import InferShapes
from sklearn.metrics import accuracy_score

# load the test set CSV
def load_test_data(csv_path):
    # semicolon separated values in the CSV
    with open(csv_path, 'r') as f:
        lines = f.readlines()

    data = []
    for line in lines[1:]:  # skip header
        parts = line.strip().split(';')
        if len(parts) == 8:
            entry = {
                'FileName': parts[0],
                'Width': int(parts[1]) if parts[1] else 0,
                'Height': int(parts[2]) if parts[2] else 0,
                'Roi.X1': int(parts[3]) if parts[3] else 0,
                'Roi.Y1': int(parts[4]) if parts[4] else 0,
                'Roi.X2': int(parts[5]) if parts[5] else 0,
                'Roi.Y2': int(parts[6]) if parts[6] else 0,
                'ClassId': int(parts[7]) if parts[7] else None
            }
            data.append(entry)

    return data

# preprocess a single image input
def preprocess_image(image_path, roi=None, input_shape=(32,32)):
    # read the image in .ppm format
    img = Image.open(image_path)

    # extract ROI
    if roi and all(x > 0 for x in [roi['Roi.X2'] - roi['Roi.X1'], roi['Roi.Y2'] - roi['Roi.Y1']]):
        img = img.crop((roi['Roi.X1'], roi['Roi.Y1'], roi['Roi.X2'], roi['Roi.Y2']))

    # resize image to model's desired input dimension (32 * 32)
    img = img.resize(input_shape)

    # convert to numpy array
    img_array = np.array(img)

    # normalize image
    # img_array = img_array.astype(np.float32) / 255.0

    # 1 * 3 * 32 * 32
    img_array = np.transpose(img_array, (2, 0 ,1))
    img_array = np.expand_dims(img_array, axis=0)   # add batch dimension
    
    return img_array, Image.open(image_path)

def export_npy(csv_path, images_dir, input_shape):
    test_data = load_test_data(csv_path)

    samples = []
    images = []
    labels = []
    for i, entry in enumerate(test_data):
        # construct image path
        image_path = os.path.join(images_dir, entry['FileName'])
        # process every test sample
        roi = {
            'Roi.X1': entry['Roi.X1'],
            'Roi.Y1': entry['Roi.Y1'],
            'Roi.X2': entry['Roi.X2'],
            'Roi.Y2': entry['Roi.Y2']
        }
        labels.append(entry["ClassId"])

        img_array, original_image_data = preprocess_image(image_path, roi, input_shape)
        samples.append(img_array)
        images.append(original_image_data)
    
    result = np.stack(samples)
    print(result.shape)
    np.save("onnx/data/gtsrb-in.npy", result)

    # result = np.array(labels)
    # print(result.shape)
    # print(result.dtype)
    # np.save("onnx/data/gtsrb-out.npy", result)

    # with open("onnx/data/gtsrb-ppm.pkl", "wb") as f:
    #     pickle.dump(images, f)



def test_model(model_path, csv_path, images_dir, input_shape=(32)):
    # load ONNX model
    print(f"Loading model from {model_path}")
    model = ModelWrapper(model_path)

    print("Inferring shapes for the model")
    model = model.transform(InferShapes())

    # load test data
    print(f"Loading test data from {csv_path}")
    test_data = load_test_data(csv_path)
    print(f"Loaded {len(test_data)} test samples")

    input_tensor_name = model.graph.input[0].name
    output_tensor_name = model.graph.output[0].name

    true_labels = []
    predicted_labels = []
    count = 0

    with torch.no_grad():
        for i, entry in enumerate(test_data):
            try:
                # construct image path
                image_path = os.path.join(images_dir, entry['FileName'])
                # process every test sample
                roi = {
                    'Roi.X1': entry['Roi.X1'],
                    'Roi.Y1': entry['Roi.Y1'],
                    'Roi.X2': entry['Roi.X2'],
                    'Roi.Y2': entry['Roi.Y2']
                }

                img_array, _ = preprocess_image(image_path, roi, input_shape)

                # run inference
                input_dict = {input_tensor_name : img_array}
                output_dict = oxe.execute_onnx(model, input_dict)
                output = output_dict[output_tensor_name]
                prediction = np.argmax(output)

                # store result
                if entry['ClassId'] is not None:
                    true_labels.append(entry['ClassId'])
                    predicted_labels.append(prediction)

                if i % 100 == 0:
                    print(f"Processed {i}/{len(test_data)} images")

                count += 1
                #if(count >= 300):
                #    break

            except Exception as e:
                print(f"Error processing entry {i} ({entry['FileName']}): {e}")

    if true_labels:
        accuracy = accuracy_score(true_labels, predicted_labels)
        print(f"test accuracy: {accuracy:.4f}")

if __name__ == "__main__":
    csv_path = "gtsrb-test/GT-final_test.csv"
    images_dir = "gtsrb-test/images"
    input_shape = (32, 32)

    export_npy(csv_path, images_dir, input_shape)

