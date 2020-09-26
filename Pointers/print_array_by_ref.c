#include "stdio.h"

void print(char *C){
  int i = 0;
  // while (*(C+i) != '\0')
  while (C[i] != '\0'){
    printf("%c", C[i]);
    i++;
  }
  printf("\n");
}

int main(){
  char C[20] = "Hello"; // string gets stored in the space for array
  // char *C = "Hello"; // string gets stored as a compile time constant, which cannot be modified.
  print(C);
}

/*
Hello
*/
