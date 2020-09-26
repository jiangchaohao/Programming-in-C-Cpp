// https://youtu.be/K7J3nCeRC80?list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P

// Print linked list using recursion

#include "stdio.h"
#include "stdlib.h"

struct Node {
  int data;
  struct Node* next;
};

void Print(struct Node* p){
  if(p ==  NULL) {
    printf("\n");
    return; // Exit condition
  }
  printf("%d ", p->data); // First print the value in the node
  Print(p->next); // recursion call
  /*
  This will print in Reverse order.
  Print(p->next); // recursion call
  printf("%d ", p->data); // First print the value in the node
  */
}

void ReversePrint(struct Node* p) {
  if (p ==  NULL) return;
  ReversePrint(p->next);
  printf("%d ", p->data);
}

struct Node* Insert(struct Node* head, int data){
  struct Node* temp = (struct Node*)(malloc)(sizeof(struct Node));

  temp->data = data;
  temp->next = NULL;

  if(head == NULL) head = temp;
  else {
    struct Node* temp1 = head;
    while (temp1->next != NULL) temp1 = temp1->next;
    temp1->next = temp;
  }
  return head;
}


int main(){
  struct Node* head = NULL; // local variable
  head = Insert(head, 2);
  head = Insert(head, 4);
  head = Insert(head, 6);
  head = Insert(head, 5);
  printf("Printing the elements in forward\n");
  Print(head);
  printf("Printing the elements in reverse order\n");
  ReversePrint(head);
  printf("\n");
}

/*
Printing the elements in forward
2 4 6 5
Printing the elements in reverse order
5 6 4 2
*/

/*
For the normal print, that for normal traversal of the linked list not for
the reverse print, for the normal print an iterative approach will be a lot more
efficient than the recursive approach because in iterative approach we will just use
one temporary variable while in recursion we will use space in the stack section of the memory for so many function calls
so there is implicit use of memory there.

for ReversePrint operation we will any day have to store elements in some structure
so if we use recursion it's still okay.
*/
