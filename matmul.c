#include <stddef.h>
#include <stdlib.h>
#include "matmul.h"

double* mmul1(const double* A, const double* B, const size_t n){ // Dot product of A and B
  double* C = (double *)malloc(n * n * sizeof(double));
  for (size_t i = 0; i < n; i++){
    for (size_t j = 0; j < n; j++){
      for (size_t k =0; k < n; k++){
        C[i * n + j] += A[i * n + k] * B[k * n + j];

      }

    }
  }
  return C;
}
