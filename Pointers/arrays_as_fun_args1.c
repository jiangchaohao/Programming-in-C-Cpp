// https://youtu.be/CpjVucvAc3g?list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_

#include "stdio.h"

int SumOfElements(int *A, int size){
  int i, sum = 0;

  for (i = 0; i < size; i++){
    sum += A[i]; // A[i] is *(A + i)
  }
  return sum;
}

int main(){
  int A[] = {1, 2, 3, 4, 5};
  int size = sizeof(A) / sizeof(A[0]);

  int total = SumOfElements(A, size);
  printf("Sum of the elements in A is %d\n", total);
}

/*
Sum of the elements in A is 15
*/
