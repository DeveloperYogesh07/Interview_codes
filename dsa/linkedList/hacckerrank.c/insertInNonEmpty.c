#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;

typedef struct linked_list{
   node *head,*tail;
}linked_list;

int add(linked_list *list,int item){
   node *new_node = malloc(sizeof(node));
   new_node->data = item;
   new_node->next = NULL;
 
 if(list->head == NULL){
    list->head = new_node;
    list->tail = new_node;
 }
 else{
    list->tail->next = new_node;
    list->tail = new_node;
 }

 return 0;

}

void display(linked_list *list){
    node *ptr = list->head;
    while(ptr != NULL){
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
}



int main(){
  linked_list *list = malloc(sizeof(linked_list));
  list->head = NULL;
  list->tail = NULL;

  add(list,5);
  add(list,6);
  add(list,7);
  add(list,8);

  display(list);

}


