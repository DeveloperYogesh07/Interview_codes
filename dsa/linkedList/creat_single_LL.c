#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *link;
};

void count_of_node(struct node *head);

int main(){
   struct node *temp = NULL;
    struct node *head = malloc(sizeof(struct node));
     head = NULL;
    head->data = 45;
    head->link = NULL;

    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 3;
    head->link = NULL;
    head->link = ptr;


    ptr = malloc(sizeof(struct node));
    ptr->data = 10;
    ptr->link = NULL;
    head->link->link = ptr;

    ptr = malloc(sizeof(struct node));
    ptr->data = 10;
    ptr->link = NULL;
    head->link->link->link = ptr;

   count_of_node(head);
    
}



void count_of_node(struct node *head){
  // printf("entered here");
  int count = 0;
     if(head == NULL){
       printf("linked list is already empty");
     }

  struct node *temp = NULL;
  temp = head;

  while(temp != NULL){
    count++;
    printf("%d\n",temp->data);
    temp = temp->link;
  }
  printf("%d",count);

}