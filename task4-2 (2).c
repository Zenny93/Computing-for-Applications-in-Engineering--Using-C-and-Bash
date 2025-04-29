#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fnorm.h"
int main(int argc, char *argv[]){
  //argv[1] = "/usr/local/me459/hw05_sample.csv";
  FILE* fp = fopen(argv[1], "r"); // Opens the csv file
  //FILE* fp = fopen("HW05Sample.csv", "r"); // Opens the csv file
  if (fp == NULL){
    printf("Unable to open csv file\n"); // gets printed if the file does not open
    return 0;
                }


  char buff[25000]; // This is a buffer to hold the values being read
  size_t i = 0;
  size_t j = 0;
  size_t n_rows = 0;
  size_t n_cols = 0;
  double sqrtsumSquare;

char *token;
while(fgets(buff,25000,fp)){
  //printf("%s\n",buff);
  j = 0;
   token = strtok(buff,","); // the strtok stores the data between the calls
   //printf("token: %s\n", token);
while(token != NULL){
    token = strtok(NULL,",");
    j++;
  }
    i = i + 1;

  }

n_rows = i;
n_cols = j;


  double *A = (double *)malloc(n_rows*n_cols * sizeof(double));
  i = 0;
  //rewind(fp);
  FILE* fp2 = fopen(argv[1], "r");
  while(fgets(buff,25000,fp2)!= NULL){

    printf("%s\n",buff);
  j = 0;
      token = strtok(buff,","); // the strtok stores the data between the calls
        //printf("%s\t", token);
    while(token != NULL){

      A[i * n_cols + j] = atof(token); // converts the content of the string to a double
      token = strtok(NULL,",");
      j++;
      printf("%f\t",  A[i * n_cols + j]);
      //printf("\n");

                          }
                          printf("\n");
                          i++;

                             }

    fclose(fp);
      fclose(fp2);
    sqrtsumSquare = fnorm(A,n_rows,n_cols);
     printf("Frobenius norm is %.3f\n",sqrtsumSquare); // frobenius
  //sqrtsumSquare = fnorm(A,n_rows,n_cols);
  // printf("%f\n",sqrtsumSquare);
     free(A);
   return 0;

}
