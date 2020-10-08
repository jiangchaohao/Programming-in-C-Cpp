#include "stdio.h"
#include "stdlib.h"

/*
"argc" refers to the number of command line arguments passed to the program.
This includes the actual name of the program.

==================================

"argv" contains actual arguments starting from index 0.
Index 0 is the name of the program.
Index 1 will be the first argument passed to the program.
Index 2 will be the second argument passed to the program.
And so on.
*/

int main(int argc, char **argv){
  printf("Total number of arguments is %d\n", argc);
  printf("The first argument is %s\n", argv[1]);

  while (argc--) {
    printf("Arguments are %s\n", *argv++);
  }
  return 0;
}

/*
./main-with-args

Total number of arguments is 1
The first argument is (null)
Arguments are ./main-with-args

./main-with-args Sunday Monday Tuesday

Total number of arguments is 4
The first argument is Sunday
Arguments are ./main-with-args
Arguments are Sunday
Arguments are Monday
Arguments are Tuesday
*/
