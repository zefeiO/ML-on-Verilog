#include "stdint.h"
#include "stddef.h"

// customized memory layout
float *target_address(float *src_ptr, size_t entry_idx);

void serialize_float_tensor(const float *tensor, void *out_bytes, size_t num_elements) {
    for (size_t i = 0; i < num_elements; i++) {
        const float entry = tensor[i];
        float *dest = target_address((float*)out_bytes, i);
        *dest = entry;
    }
}