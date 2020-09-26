// https://www.tutorialspoint.com/cprogramming/c_pointers.htm

#include <stdio.h>

int main () {
  int var = 20; // variable declaration
  int *ip; // pointer declaration

  ip = &var; // store address of var in pointer variable

  printf("Address of var is: %x\n", &var);

  printf("Address stored in ip is: %x\n", ip);

  printf("Value of *ip variable is: %d\n\n", *ip);

  printf("Changing the value of var by using pointers\n\n");

  *ip = 45; // dereferencing

  printf("Updated value of var is: %d\n", var);

  printf("Address of var is: %x\n", &var);

  printf("Address stored in ip is: %x\n", ip);

  printf("Value of *ip variable is: %d\n", *ip);

  return 0;
}

/*
Address of var is: bbcc64bc
Address stored in ip is: bbcc64bc
Value of *ip variable is: 20

Changing the value of var by using pointers

Updated value of var is: 45
Address of var is: bbcc64bc
Address stored in ip is: bbcc64bc
Value of *ip variable is: 45
*/
