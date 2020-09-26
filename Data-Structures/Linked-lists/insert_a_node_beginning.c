// https://youtu.be/cAZ8CyDY56s?list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P

// Linked List: Inserting a node at the beginning

#include "stdio.h"
#include "stdlib.h"

struct Node {
  int data;
  struct Node* next;
};

struct Node* head; // global variable, can be accessed anywhere

void Insert(int x){
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
  temp->data = x;
  temp->next = head;
  head = temp;
}

void Print(){
  struct Node* temp = head;
  printf("List is: ");
  while (temp != NULL){
    printf(" %d", temp->data);
    temp = temp->next;
  }
  printf("\n");
}


int main(){
  head = NULL; // empty list
  printf("How many numbers?\n");
  int i, n, x;
  scanf("%d", &n);

  for(i = 0; i < n; i++){
    printf("Enter the number \n");
    scanf("%d", &x);
    Insert(x);
    Print();
  }
}

/*
How many numbers?
5
Enter the number
1
List is:  1
Enter the number
2
List is:  2 1
Enter the number
3
List is:  3 2 1
Enter the number
4
List is:  4 3 2 1
Enter the number
5
List is:  5 4 3 2 1
*/
