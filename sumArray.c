#include <stddef.h>
#include <stdlib.h>
#include "sumArray.h"

double* sumArray1(const double* A, const size_t n){ // looping via rows in thi Array
  double *psum = (double *)malloc(sizeof(double));
  *psum = 0.0;
  for (size_t i = 0; i < n; i++){
    for (size_t j = 0; j < n; j++){
      *psum += A[i * n + j];
    }
  }
  return psum;
}

double* sumArray2(const double* A, const size_t n){ //looping through column in this Array
  double *psum = (double *)malloc(sizeof(double));
  *psum = 0.0;
  for (size_t j = 0; j < n; j++){
    for (size_t i = 0; i < n; i++){
      *psum += A[i * n + j];
    }
  }
  return psum;
}
