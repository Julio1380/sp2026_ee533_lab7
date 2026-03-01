#include <cuda_bf16.h>
__global__ void bf16_vector_mul(__nv_bfloat16 *a, __nv_bfloat16 *b, __nv_bfloat16 *c) {
    int idx = threadIdx.x;
    c[idx] = __hmul(a[idx], b[idx]);
}