// https://youtu.be/d3kd5KbGB48?list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_


#include "stdio.h"

int main() {
  int x = 5;
  int *p = &x;

  *p = 6;

  int **q = &p;
  int ***r = &q;

  printf("%d\n", *p);
  printf("%d\n", *q);
  printf("%d\n", **q);
  printf("%d\n", **r);
  printf("%d\n", ***r);

  ***r = 10;
  printf("x = %d\n", x);

  **q = *p + 2;
  printf("x = %d\n", x);

}

/*
6
1884506028
6
1884506028
6
x = 10
x = 12
*/
