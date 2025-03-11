import numpy as np
import os
import random
from  scipy.io import wavfile

LABEL_MAPPING = ["yes", "no", "up", "down", "left", "right", "on", "off", "stop", "go", "follow", "forward"]

results = []
with open("onnx/kws.npz", "rb") as f:
    np_f = np.load(f)
    data_arr = np_f["data_arr"]
    label_arr = np_f["label_arr"]

    for i in range(len(label_arr)):
        label = label_arr[i]
        
        # Construct the path for the folder that corresponds to the label.
        base_folder = "/Users/jamesou/Downloads/speech_commands_v0.02"
        label_folder = os.path.join(base_folder, LABEL_MAPPING[label])
        if not os.path.isdir(label_folder):
            print(f"Warning: Folder for label '{label}' not found at '{label_folder}'.")
            continue
        
        # List all .wav files in the label folder.
        wav_files = [f for f in os.listdir(label_folder) if f.lower().endswith('.wav')]
        if not wav_files:
            print(f"Warning: No WAV files found in folder '{label_folder}' for label '{label}'.")
            continue
        
        # Randomly select a WAV file.
        while True:
            chosen_wav = random.choice(wav_files)
            wav_path = os.path.join(label_folder, chosen_wav)
            
            try:
                sample_rate, data = wavfile.read(wav_path)
                if len(data) == 16000:
                    results.append(data)
                    break
                else:
                    continue
            except Exception as e:
                print(f"Error reading file '{wav_path}': {e}")

result = np.stack(results)
print(result.shape)
    
np.save("onnx/kws_wav.npy", result)

