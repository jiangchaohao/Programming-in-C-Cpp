/*
In case of an array, the element at an index i is given by
Address - &A[i] or (A + i)
Value - A[i] or *(A + i)
*/

#include "stdio.h"
int main(){
  int A[] = {2, 4, 5, 8, 1};

  // address of the first element in the array
  printf("%d\n", A);
  printf("%d\n", &A[0]);

  // first element of the array
  printf("%d\n", A[0]);
  printf("%d\n", *A);

  // dereferencing
  /*
  int *p = A;
  A++; // invalid
  p++; // valid
  */
  // using a loop
  for (int i = 0; i < 5; i++){

    // printing the address of the elements
    printf("Address = %d\n", &A[i]);
    printf("Address = %d\n", A + i);

    // printing the elements of the array
    printf("Value = %d\n", A[i]);
    printf("Value = %d\n", *(A + i));
  }
}

/*
437121072
437121072
2
2
Address = 437121072
Address = 437121072
Value = 2
Value = 2
Address = 437121076
Address = 437121076
Value = 4
Value = 4
Address = 437121080
Address = 437121080
Value = 5
Value = 5
Address = 437121084
Address = 437121084
Value = 8
Value = 8
Address = 437121088
Address = 437121088
Value = 1
Value = 1
*/
