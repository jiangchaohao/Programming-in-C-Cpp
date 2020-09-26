// https://youtu.be/VOQNf1VxU3Q?list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P

// Doubly linked list implementation

// https://gist.github.com/mycodeschool/7429492

#include "stdio.h"
#include "stdlib.h"

struct Node{
  int data;
  struct Node* next;
  struct Node* prev;
};

struct Node* head; // global variable - pointer to head Node

struct Node* GetNewNode(int x){
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

  newNode->data = x; // (*newNode).data = x
  newNode->next = NULL; // (*newNode).next = NULL
  newNode->prev = NULL;

  return newNode;
}

void InsertAtHead(int x){
  struct Node* newNode = GetNewNode(x);

  if(head == NULL){
    head = newNode;
    return;
  }
  head->prev = newNode;
  newNode->next = head;
  head = newNode;
}

void Print(){
  struct Node* temp = head;
  printf("Forward: ");

  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

void ReversePrint(){
  struct Node* temp = head;
  if(temp == NULL) return; // empty list

  // Going to last Node
  while(temp->next != NULL){
    temp = temp->next;
  }

  // Traversing backward using new pointer
  printf("Reverse: ");

  while(temp != NULL){
    printf("%d ", temp->data);
    temp = temp->prev;
  }

  printf("\n");
}


int main(){

  head = NULL; // empty list
  InsertAtHead(2); Print(); ReversePrint();
  InsertAtHead(4); Print(); ReversePrint();
  InsertAtHead(6); Print(); ReversePrint();
}

/*
Forward: 2
Reverse: 2
Forward: 4 2
Reverse: 2 4
Forward: 6 4 2
Reverse: 2 4 6
*/
