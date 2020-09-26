// https://youtu.be/CpjVucvAc3g?list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_
/* When  a compiler sees an array as a function argument,
it does not copy the whole array.
What it actually does, it just creates a pointer variable
by the same name instead of creating the whole array
*/

#include "stdio.h"

int SumOfElements(int A[]){
  int i, sum = 0;
  int size = sizeof(A) / sizeof(A[0]);
  printf("SOE - Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));

  for (i = 0; i < size; i++){
    sum += A[i];
  }
  return sum;
}

int main(){
  int A[] = {1, 2, 3, 4, 5};

  int total = SumOfElements(A);
  printf("Sum of the elements in A is %d\n", total);
  printf("Main - Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
}

/*
SOE - Size of A = 8, size of A[0] = 4
Sum of the elements in A is 3
Main - Size of A = 20, size of A[0] = 4
*/
