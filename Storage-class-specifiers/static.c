/*
'static' variables
- These are initialized to zero.
- They are not destroyed even after program control exits from the block.
- Value of the variable persists between different function calls.
- Storage space is CPU memory.
*/

#include "stdio.h"
#include "stdlib.h"


void increment(void);

int main(){
  increment();
  increment();
  increment();
  increment();
  return 0;
}

void increment(void){
  // The scope of static variable is local to the function they are defined in.
  // They do not lose their value between function calls.
  static int i = 0;
  printf("%d\n", i);
  i++;
}

/*
0
1
2
3
*/
