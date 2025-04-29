
#include <stddef.h>

#ifndef FNORM_H
#define FNORM_H
// This function takes a pointer to matrix with n_rows and n_cols and
//returns the Frobenius norm of the matrix
double fnorm(const double *A, size_t n_rows, size_t n_cols);

#endif
