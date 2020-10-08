/*
- Register variables will be accessed faster than normal variables.
- They are stored in register memory rather than main memory.
- Limited number of variables can be used since register size is very low.
- 16 bits, 32 bits or 64 bits.
*/


#include "stdio.h"
#include "stdlib.h"

int main() {
  register int i;
  for(i = 1; i <= 5; i++){
    printf("Values stored in register memory %d\n", i);
  }
  return 0;
}


/*
Values stored in register memory 1
Values stored in register memory 2
Values stored in register memory 3
Values stored in register memory 4
Values stored in register memory 5
*/
