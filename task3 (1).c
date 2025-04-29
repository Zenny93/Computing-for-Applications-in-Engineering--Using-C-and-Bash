#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int sort(const void *first_arg, const void *second_arg){
  int first = *(int *)first_arg;
  int second = *(int *)second_arg;
  // carry out the comparison
  if (first < second) {
    return -1;
  } else if (first == second) {
    return 0;
  } else {
    return 1;
}
}
//Check if two arguments are given in the command line
int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Need one argument to play.\n");
    exit(1);
  }
  //Checking if the argument in the command line is an integer. if the value is not an integer, the program exits automatically
  // Defining an argument that checks the length of a string
  for (int j = 0, lengthOfString = strlen(argv[1]); j < lengthOfString; j++){
  if (!isdigit(argv[1][j])){
  printf("Input is not an integer");
  exit(1);
  }
  }

  //printing an array of numbers that ranges from 0 to N and allocating it to a memory
  int values = atoi(argv[1]); // argv[0] is the program name
  int *storageArray = (int *)malloc((values+1)* sizeof(int));

  for (int i = 0; i <= values; i++) {
    storageArray[i] = i;
    printf("%d ", storageArray[i]);
  }
  printf("\n");
  //Sorting array in descending order
  qsort(storageArray, values, sizeof(int), sort);
  for ( int i = values; i >= 0; i--) {
      printf("%d ", storageArray[i]);
    }
printf("\n");
  free(storageArray);
  return 0;
}
