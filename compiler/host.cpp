#include <stdlib.h>
#include <cuda_runtime.h>

// Kernel declaration (implemented in kernel.cu)
extern void vectorAddGPU(const float*, const float*, float*, int);

int main() {
    const int N = 4;
    size_t size = N * sizeof(float);

    float hA[N], hB[N], hC[N];

    for (int i = 0; i < N; i++) {
        hA[i] = i;
        hB[i] = i * 2;
    }

    float *dA, *dB, *dC;
    cudaMalloc(&dA, size);
    cudaMalloc(&dB, size);
    cudaMalloc(&dC, size);

    cudaMemcpy(dA, hA, size, cudaMemcpyHostToDevice);
    cudaMemcpy(dB, hB, size, cudaMemcpyHostToDevice);

    vectorAddGPU<<<1, N>>>(dA, dB, dC, N);
    cudaDeviceSynchronize();

    cudaMemcpy(hC, dC, size, cudaMemcpyDeviceToHost);

    cudaFree(dA);
    cudaFree(dB);
    cudaFree(dC);

    return 0;
}
