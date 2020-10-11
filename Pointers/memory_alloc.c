/*
https://youtu.be/xDVC3wKjS64?list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_
C programming language-----
For allocating block of memory:
- malloc : void* malloc(size_t size)
- calloc : void* calloc(size_t num, size_t size)
- realloc : void* realloc(void* ptr, size_t size)

When malloc allocates some amount of memory, it
does not initialize the bytes with any value.

If we allocate memory through calloc, it sets
all byte positions with value zero.

If you have a block of memory, 
dynamically allocated block of memory and if you want to change the size of this block of memory, 
then you can use realloc.

For deallocating block of memory
- free

We cannot dereference a void pointer.
*/

#include "stdio.h"
#include "stdlib.h"

int main(){
  int n;
  printf("Enter size of array\n");
  scanf("%d", &n);

  // int A[n]; This is not okay
  // Use malloc
  int *A = (int*)malloc(n*sizeof(int));
  for (int i = 0; i < n; i++){
    A[i] = i + 1;
  }

  for (int i = 0; i < n; i++){
    printf("%d ", A[i]);
  }
  printf("\n");
  /*
  Any memory that is dynamically allocated remains allocated
  till the lifetime of the program, till the time the program is
  executing.
  */
  free(A);
  A = NULL; // after free, adjust pointer to NULL

  // Use calloc
  int *B = (int*)calloc(n, sizeof(int));
  for (int i = 0; i < n; i++){
    printf("%d ", B[i]);
  }
  printf("\n");

  // Use realloc
  int* C = realloc(B, 2*n*sizeof(int));
  printf("Prev block address = %d, new address = %d\n", B, C);
  for (int i = 0; i < 2*n; i++){
    printf("%d\n", C[i]);
  }
}

/*
Enter size of array
5
1 2 3 4 5
0 0 0 0 0
Prev block address = 1077447328, new address = 1077447328
0
0
0
0
0
0
132433
0
0
0
*/
