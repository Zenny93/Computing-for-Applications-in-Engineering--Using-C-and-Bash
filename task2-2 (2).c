#include <stdio.h>
#include <stdlib.h>
#include "mvmul.h"
#include <time.h>


int main(int argc, char *argv[]) {

    if (argc != 2) {

      printf("Need one argument to play.\n");

      exit(1);

    }

   size_t n = atoi(argv[1]); // argv[0] is the program name. This line is needed to convery the char n to an integer

     double *A = (double *)malloc(n*n * sizeof(double));
     double *b = (double *)malloc(n * sizeof(double)); //allocating a n double value to vector b
     double *c = (double *)malloc(n * sizeof(double)); // allocating memory of n double to product c
  //c = Ab
  for (size_t i = 0; i <= n-1; i++){
    for (size_t j= 0; j <= n-1; j++){
    A[i * n + j]= (double)rand()/RAND_MAX*2.0-1.0; //initializing A [-1,1]
    }
  }
  printf("\n");
  for (size_t i = 0; i <= n-1; i++){
   b[i] = 1.0; //initializing B
  }
  printf("\n");
   for (size_t i = 0; i <= n-1; i++){
     c[i] = 0.0; // C is intialized because you have to intialize C to zero before calling the functiom
   }
   printf("\n");


  clock_t t; //Getting the timing
  t = clock();
  mvmul(A,b,c,n);
   printf("%f\n",c[n-1]); //printing the value of c
  t = clock()- t;
   // Calling the mvmul function
  double timetaken_mvm =((double)t)/CLOCKS_PER_SEC; // Time it took for the function to execute
  printf("%f ms\n",(timetaken_mvm*1000));


    free(A);//Freeing A
    free(b); // Freeing b
    free(c); // freeing C
    return 0;
}
