/* When a program or application is started,
then the computer sets aside some amount of memory.
The memory that is set aside for the application is
is typically divided into these four parts.
Heap (at the top), Stack, Static/Global, Code (Text) (at the bottom)
https://youtu.be/LW8Rfh6TzGg?list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_
*/

#include "stdio.h"

void Increment(int a){
  a = a + 1;
  printf("Address of a in Increment loop is %d\n", &a);
}

int main(){
  int a = 10;
  Increment(a);
  // printf("%d\n", a);
  printf("Address of a in main loop is %d\n", &a);
}

/*
Address of a in Increment loop is 727497772
Address of a in main loop is 727497796
*/
