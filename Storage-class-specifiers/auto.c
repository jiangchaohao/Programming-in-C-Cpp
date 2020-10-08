/*
Specifiers
- Tell the compiler where to store a variable.
- How to store the variable.
- What is the initial value of the variable.
- Life time of the variable.

Types of storage class specifiers are:
- auto
- static
- extern
- register

auto keyword
- declares an automatic variable.
- It has a local scope.
- Keywords are not initialized automatically.
- You should explicitly initialize keywords while declaring
- Storage space of keywords is CPU memory.
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
  auto int i = 0; // local scope.
  printf("%d\n", i);
  i++;
}

/*
0
0
0
0
*/
