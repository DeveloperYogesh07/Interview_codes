#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *link;
};

struct node * add_at_beginning(struct node *head,int data);

int main(){
    struct node *head = malloc(sizeof(struct node));
    struct node *temp;
    head->data = 1;
    head->link = NULL;

    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 2;
    ptr->link = NULL;
    head->link = ptr;

    ptr = malloc(sizeof(struct node));
    ptr->data = 5;
    ptr->link = NULL;
    head->link->link = ptr;

   head =  add_at_beginning(head,8);
   temp = head;
   while(temp != NULL){
    printf("%d\n",temp->data);
    temp = temp->link;
   }

}

struct node * add_at_beginning(struct node *head,int data){
     struct node *temp = malloc(sizeof(struct node));
     temp->data = data;
     temp->link = NULL;

     temp->link = head;
     head = temp;

     return head;


}