//Using Bubble Sort
#include <stdio.h>
#include "sort.h"
#include <stdlib.h>
void sort (int* A, size_t n_elements){
  int i, j, z;
  for (i = 0; i < n_elements; i++) {
    for (j = 0; j < n_elements-i-1; j++){
      if (A[j] > A[j+1]){
        z = A[j];
        A[j] = A[j + 1];
        A[j+1] = z;

      }

    }


  }

}
