#include "stdio.h"

void  Increment(int *p) {
  *p = *p + 1; // dereferencing the address
}

int main(){
  int a = 10;
  Increment(&a); // call by reference
  printf("a = %d\n", a);
}

/*
a = 11
*/
