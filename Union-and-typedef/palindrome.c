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
*/

// To check whether a given number is a palindrome
#include "stdio.h"
#include "stdlib.h"

int main(){

  typedef unsigned int uint;
  uint n, n1, rev = 0, rem;
  printf("Enter any three digit number: \n");
  scanf("%u", &n);

  n1 = n;

  while(n > 0) {
    rem = n % 10;
    rev = rev * 10 + rem;
    n = n / 10;
  }

  if(n1 == rev) printf("Given number is a palindrome!\n");
  else printf("Given number is not a palindrome\n");
  return 0;
}


/*
Enter any three digit number:
121
Given number is a palindrome!
*/
