/*
- Scope of extern variable is throughout the main program.
- Definition for extern variable might be anywhere in the C program.
- extern variables are initialized to zero, by default.
- They can be accessed by all functions in the program.
- These are stored in CPU memory.
*/


#include "stdio.h"
#include "stdlib.h"

int x = 10;

int main() {
  extern int y;
  printf("The value of x is %d\n", x);
  printf("The value of y is %d\n", y);
  return 0;
}

int y = 50;

/*
The value of x is 10
The value of y is 50
*/
