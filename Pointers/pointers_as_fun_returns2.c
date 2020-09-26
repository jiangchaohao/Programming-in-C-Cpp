// https://youtu.be/E8Yh4dw6Diw?list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_

#include "stdio.h"
#include "stdlib.h"

void PrintHelloWorld(){
  printf("Hello World\n");
}

int *Add(int *a, int *b){ // called function - returns pointer to integer
  // a and b are pointers to integers local to Add

  int *c = (int*)malloc(sizeof(int));
  *c = (*a) + (*b);
  return c;
}

int main(){ // calling function
  int a = 2, b = 4;

  // call be reference
  int* ptr = Add(&a, &b);
  PrintHelloWorld();
  printf("Sum = %d\n", *ptr);
}

/*
Hello World
Sum = 6
*/
