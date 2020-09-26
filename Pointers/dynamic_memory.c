#include "stdio.h"
#include "stdlib.h"

int main(){
  int a; // local variable: goes on stack

  // Reserve some space on heap by calling malloc
  int *p;
  p = (int*)malloc(sizeof(int));

  *p = 10; // dereferencing is the only way to store the value
  free(p); // clear the memory

  p = (int*)malloc(sizeof(int));
  *p = 20; // dereferencing is the only way to store the value

  // store integer array of 20 elems
  p = (int*)malloc(20*sizeof(int));
  // if malloc is not able to find any free block of memory,
  // is not able to allocate some memory on the heap, it returns null.
}

/*
In C++,
we can write as
int main(){
int a;
int *p;

p = new int;
*p = 10;
delete p;

p = new int[20];
delete[] p;
}
*/
