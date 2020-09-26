// https://youtu.be/sFVxsglODoo?list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P

/* We can implement stacks using
a) Arrays
b) Linked lists
*/

/* In an array based implementation, we can push
onto the stack only till the array is not exhausted.
*/

 // Stack - array based implementation

#include "stdio.h"

#define MAX_SIZE 101

int A[MAX_SIZE];
int top = -1;

void Push (int x){
  if(top == MAX_SIZE - 1) {
    printf("Error: Stack overflow\n");
    return;
  }
  A[++top] = x;
  // top++;
  // A[top] = x;
}

void Pop(){
  if (top == -1) {
    printf("Error: No element to pop\n");
    return;
  }
  top--;
}

void Print(){
  int i;
  printf("Stack: ");
  for(i = 0; i <= top; i++) {
    printf("%d ", A[i]);
  }
  printf("\n");
}

int Top(){
  return A[top];
}

int main(){
  Push(2); Print();
  Push(5); Print();
  Push(10); Print();
  Pop(); Print();
  Push(12); Print();
}

/*
Stack: 2
Stack: 2 5
Stack: 2 5 10
Stack: 2 5
Stack: 2 5 12
*/
