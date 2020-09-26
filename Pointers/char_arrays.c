/*
How to store strings
Size of array >= Number of chars in string + 1
The extra char (+1) is needed for adding a null character
to denote the end of the string.

For storing John, we can have
c[0] = 'J'
c[1] = 'o'
c[2] = 'h'
c[3] = 'n'
c[4] = '\0'

Rule: A string in C has to be null terminated.
*/

#include "stdio.h"
#include "string.h"

int main(){
  // without using the null termination
  // Size of array  = Number of chars in the string
  char C[4];
  C[0] = 'J';
  C[1] = 'O';
  C[2] = 'H';
  C[3] = 'N';
  printf("%s\n", C);

  // without using the null termination
  // Size of array >= Number of chars in the string
  char S[10];
  S[0] = 'J';
  S[1] = 'O';
  S[2] = 'H';
  S[3] = 'N';
  printf("%s\n", S);

  // with the null termination
  // Size of array >= Number of chars in the string
  char R[10];
  R[0] = 'J';
  R[1] = 'O';
  R[2] = 'H';
  R[3] = 'N';
  R[4] = '\0';
  printf("%s\n", R);
}

/*
JOHN"V
JOHN�ՃU"V
JOHN
*/
