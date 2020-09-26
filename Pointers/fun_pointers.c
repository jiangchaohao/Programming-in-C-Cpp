// https://youtu.be/ynYtgGUNelE?list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_
/*
Pointers can
- point to data
- point to functions

Function pointers store the starting address of the
block of memory containing the instructions in a function.

A program is a set of instructions that we would
give to the computer to perform a task.

Compiler generates a machine code or executable code.
*/

#include "stdio.h"

void PrintHello(char *name){
  printf("Hello %s\n", name);
}

int Add(int a, int b){
  return a + b;
}

int main(){
  int c;
  // pointer to the function that should take
  // (int, int) as argument/ paramter and return int
  int (*p)(int, int);
  p = Add; // function name will return us a pointer
  c = (p)(2, 3); // dereferencing and executing the function
  printf("%d\n", c);

  void (*ptr)(char*);
  ptr = PrintHello;
  ptr("John");

}

/*
5
Hello John
*/
