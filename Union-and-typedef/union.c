/*
typedef keyword
- Used to give symbolic name to an existing type or user-defined datatypes.
- A way to define alias to the commands.
- Helps to provide clarity to the code.
- Makes the code easier to understand and change.

Syntax:
typedef existing_name alias_name

Example:
typedef unsigned int uint;

============================================

Union
- A collection of different datatypes grouped together.
- Allocates one common storage space for all its members.
- We can access only one member of union at a time.

Union allocates a common storage space for all its members.
Structure allocates separate storage space for all its members.

Union occupies lower memory space.
Structure occupies higher memory space.
*/

#include "stdio.h"
#include "stdlib.h"

union student {
  int eng, maths, science;
};

int main(){
  int total;
  union student stud;
  stud.eng = 82;
  stud.maths = 70;
  stud.science = 76;
  total = stud.eng + stud.maths + stud.science;
  printf("Total is %d\n", total);
  return 0;
}


/*
Total is 228
*/
