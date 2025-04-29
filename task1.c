#include <stdlib.h>
#include <stdio.h>
#include "sumArray.h"
#include <time.h>

int main(int argc, char *argv[]) {

  if (argc != 2) { // Checks the amount of arguments passed.

    printf("Need one argument to play.\n");

    exit(1);

  }

  size_t n = atoi(argv[1]);  // Converts char n to an integer
  double *A = (double *)malloc(n*n * sizeof(double)); // allocating memory to A
  for(size_t i = 0; i < n; i++){
    for(size_t j = 0; j < n; j++){
      A[i * n + j] = (double)rand()/RAND_MAX*2.0-1.0; //filling A with double values ranging from -1,1
    }
  }

  printf("\n");
  double *Array1; //The value of psum returned in sumArray.c will be placed in this pointer to double
  clock_t t1; //Getting the timing for Array1
  t1 = clock();
  Array1 = sumArray1(A,n); //Calling SumArray1 function
  t1 = clock()- t1;
  double timetaken_Array1 =((double)t1)/CLOCKS_PER_SEC; // Time it took for the function to execute
  printf("%f ms\n",(timetaken_Array1*1000));
  printf("%f\n", *Array1); //printing the sum of Array1

  double *Array2;
  clock_t t2; //Getting the timing for Array2
  t2 = clock();
  Array2 = sumArray2(A,n); // Calling the sumArray2 Function
  t2 = clock()- t2;
  double timetaken_Array2 =((double)t2)/CLOCKS_PER_SEC; // Time it took for the function to execute
  printf("%f ms\n",(timetaken_Array2*1000));
  printf("%f\n", *Array2); //printing the value of c

  free(A);
  free(Array1);
  free(Array2);
  return 0;
}
