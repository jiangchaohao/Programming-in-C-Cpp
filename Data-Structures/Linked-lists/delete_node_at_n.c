// https://youtu.be/Y0n86K43GO4?list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P

// linked list: Delete a node at nth position

#include "stdio.h"
#include "stdlib.h"

struct Node {
  int data;
  struct Node* next;
};

struct Node* head; // global

void Insert(int data); // insert an integer at the end of the list
void Insert(int data){
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
  temp->data = data;
  temp->next = head;
  head = temp;
}

void Print(); // print all the elements in the list
void Print(){
  struct Node* temp = head;
  printf("List is: ");
  while (temp != NULL){
    printf(" %d", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

void Delete(int n); // Delete the node at position n

void Delete(int n){
  struct Node* temp1 = head;
  if(n == 1){
    head = temp1->next; // head now points to second node
    free(temp1);
    return;
  }

  int i;
  for (i = 0; i < n - 2; i++){
    temp1 = temp1->next;
    // temp1 points to (n - 1)th Node
  }
  struct Node* temp2 = temp1->next; // nth node
  temp1->next = temp2->next; // (n+1)th node
  free(temp2);

}


int main(){
  head = NULL; // empty list
  Insert(2);
  Insert(4);
  Insert(6);
  Insert(5); // List: 2, 4, 6, 5
  Print();

  int n;
  printf("Enter a position\n");
  scanf("%d", &n);

  Delete(n);
  Print();
}

/*
List is:  5 6 4 2
Enter a position
1
List is:  6 4 2
*/

/*
List is:  5 6 4 2
Enter a position
2
List is:  5 4 2
*/

/*
List is:  5 6 4 2
Enter a position
4
List is:  5 6 4
*/
