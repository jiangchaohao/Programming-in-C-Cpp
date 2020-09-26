// https://youtu.be/MuwxQ2IB8lQ?list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P

// Stack: linked list implementation

#include "stdio.h"
#include "stdlib.h"

struct Node {
  int data;
  struct Node* link;
};

struct Node* top = NULL;

void Push(int x){
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node*));
  temp->data = x;
  temp->link = top;
  top = temp;
}

void Pop(){
  struct Node* temp;
  if(top == NULL) return;
  temp = top;
  top = top->link;
  free(temp);
}

void Print(){
  printf("Stack: ");
  struct Node* temp = top;
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->link;
  }
  printf("\n");

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
Stack: 5 2
Stack: 10 5 2
Stack: 5 2
Stack: 12 5 2
*/
