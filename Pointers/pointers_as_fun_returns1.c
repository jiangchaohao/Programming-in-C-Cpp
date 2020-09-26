// https://youtu.be/E8Yh4dw6Diw?list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_

#include "stdio.h"
#include "stdlib.h"

int Add(int *a, int *b){
  // a and b are pointers to integers local to Add
  printf("Address of a in Add = %d\n", &a);
  printf("Value in a of Add (address of a of main) = %d\n", a);
  printf("Value at address stored in a of Add = %d\n", *a);

  int c = (*a) + (*b);
  return c;
}

int main(){
  int a = 2, b = 4;
  printf("Address of a in main is %d\n", &a);

  // call be reference
  int c = Add(&a, &b);
  printf("Sum = %d\n", c);
}

/*
Address of a in main is 1198793260
Address of a in Add = 1198793208
Value in a of Add (address of a of main) = 1198793260
Value at address stored in a of Add = 2
Sum = 6
*/
