#include <stddef.h>
#include <stdlib.h>
#include <math.h>
#include "fnorm.h"

double fnorm(const double *A, size_t n_rows, size_t n_cols){
  double sumSquare;
  sumSquare = 0; //initaliz
  for(size_t i = 0; i < n_rows; i++){
    for(size_t j = 0; j < n_cols; j++){
    sumSquare += pow(A[i * n_cols + j],2);
    }
  }

  double sqrtsumSquare = sqrt(sumSquare);
  return sqrtsumSquare;
}
