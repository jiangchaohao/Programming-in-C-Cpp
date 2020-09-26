// https://youtu.be/_j5lhHWkbnQ?list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_

#include "stdio.h"

int main(){
  int B[2][3];
  int (*P)[3] = B;

  printf("%d\n", B); // pointer to the first 1-D array of three elems in B
  printf("%d\n", *B); // pointer to an integer
  printf("%d\n", B[0]);
  printf("%d\n", &B[0][0]);

  int C[3][2][2] = {{{2, 5}, {7, 9}},
                    {{3, 4}, {6, 1}},
                    {{0, 8}, {11, 13}}};
  printf("%d %d %d %d\n", C, *C, C[0], &C[0][0]);
  printf("%d\n", *(C[0][0] + 1));
}

/*
1798813120
1798813120
1798813120
1798813120
1798813152 1798813152 1798813152 1798813152
5
*/
