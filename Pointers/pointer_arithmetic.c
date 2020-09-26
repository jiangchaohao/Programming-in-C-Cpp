// http://www.mycodeschool.com/

#include <stdio.h>

int main () {
  int a;
  int *p = &a;
  // Pointer arithmetic
  printf("Address p is %d\n", p);
  printf("Size of an integer is %d bytes\n", sizeof(int));
  printf("Address p + 1 is %d\n", p + 1);
  printf("Address p + 2 is %d\n", p + 2);

  return 0;
}

/*
Address p is 1592533772
Size of an integer is 4 bytes
Address p + 1 is 1592533776
Address p + 2 is 1592533780
*/
