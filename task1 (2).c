#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structs.h"

int main(){
printf("%ld\n",sizeof(struct A)); //prints the value of struct A in its own line
printf("%ld\n",sizeof(struct B)); //prints the value of struct B in its own line

struct A *structAAlloc;
structAAlloc = (struct A *)malloc(sizeof(struct A)); // Memory Allocated on Heap
structAAlloc->i = 50; // assigning value of 50 to the integer i
structAAlloc->c = 'z'; // assigning value of 30 to the char c
structAAlloc->d = 3.142; // assigning the value of pi to double d
printf("%d\n",structAAlloc->i);

printf("%c\n",structAAlloc->c);

printf("%f\n",structAAlloc->d);
free(structAAlloc);
return 0;
}
