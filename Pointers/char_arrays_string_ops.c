// Arrays are always passed to function by reference.

#include "stdio.h"
#include "string.h"

int main(){
  char C[20];
  C[0] = 'J';
  C[1] = 'O';
  C[2] = 'H';
  C[3] = 'N';
  C[4] = '\0';
  int len = strlen(C);
  printf("Length of the string %s is %d\n", C, len);
  printf("Size of the string %s in bytes = %d\n", C, sizeof(C));

  // using string literals
  char S[] = "SUDHAKAR";
  int lenS = strlen(S);
  printf("Length of the string %s is %d\n", S, lenS);
  printf("Size of the string %s in bytes = %d\n", S, sizeof(S));
}

/*
Length of the string JOHN is 4
Size of the string JOHN in bytes = 20
Length of the string SUDHAKAR is 8
Size of the string SUDHAKAR in bytes = 9
*/
