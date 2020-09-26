#include "stdio.h"

int main(){
  int a = 1025;
  int *p;
  p = &a;

  printf("Size of integer is %d\n", sizeof(int));
  printf("Address = %d, value = %d\n", p, *p);

  // void Pointer - generic pointer
  void *p0;
  p0 = p; // valid statement
  /* This pointer type is not mapped to a particular datatype,
  we cannot dereference this particular pointer variable.
  So if we try to print *p0, this will give us a compilation error.
  */
  printf("Address = %d\n", p0);
  /*
  If we perform arithmetic i.e. if we try to do something like p0 + 1,
  this will also give us compilation error.
  */
}

/*
Size of integer is 4
Address = 1121739316, value = 1025
Address = 1121739316
*/
