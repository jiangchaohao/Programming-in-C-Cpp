// https://youtu.be/sYcOK51hl-A?list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P

// Reverse a linked list

#include "stdio.h"
#include "stdlib.h"

struct Node {
  int data;
  struct Node* next;
};


struct Node*  Reverse(struct Node* head){
  struct Node *current, *prev, *next;
  current = head;
  prev = NULL;
  while (current != NULL) {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  head = prev;
  return head;
}

struct Node* Insert(struct Node* head, int data){
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
  temp->data = data;
  temp->next = NULL;

  if(head == NULL) head = temp;
  else{
    struct Node* temp1 = head;
    while(temp1->next != NULL) temp1 = temp1->next;
    temp1->next = temp;
  }
  return head;
}

void Print(struct Node* head){
  while (head != NULL){
    printf("%d ", head->data);
    head = head->next;
  }
  printf("\n");
}

int main(){
  struct Node* head = NULL; // local variable
  head = Insert(head, 2);
  head = Insert(head, 4);
  head = Insert(head, 6);
  head = Insert(head, 8);
  Print(head);
  head = Reverse(head);
  Print(head);
}

/*
2 4 6 8
8 6 4 2
*/
