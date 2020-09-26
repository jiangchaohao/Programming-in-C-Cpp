/*
* Pointer variables are strongly typed.
* We need a pointer variable of a particular type
to store the address of the particular type of the variable.
int    *ip;    // pointer to an integer
double *dp;    // pointer to a double
float  *fp;    // pointer to a float
char   *ch     // pointer to a character
*/

/*
Why strong types?
Ans: We do not use the pointer variables only to store memory addresses
but we also use them to dereference these addresses so that we can
access and modify the values in these addresses.
*/

#include <stdio.h>

int main(){
  int a = 1025;
  int *p;
  p = &a;

  printf("Size of integer is %d\n", sizeof(int));
  printf("Address = %d, value = %d\n", p, *p);
  printf("Address = %d, value = %d\n", p + 1, *(p + 1));


  char *p0;
  // typecasting
  p0 = (char*)p; //  p0 is a pointer to a character and p is a pointer to an integer.

  printf("Size of character is %d\n", sizeof(char));
  printf("Address = %d, value = %d\n", p0, *p0);
  // 1025 = 00000000 00000000 00000100 00000001
  printf("Address = %d, value = %d\n", p0 + 1, *(p0 + 1));

}

/*
Size of integer is 4
Address = 914635796, value = 1025
Address = 914635800, value = 914635796
Size of character is 1
Address = 914635796, value = 1
Address = 914635797, value = 4
*/
