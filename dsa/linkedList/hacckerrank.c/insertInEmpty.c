#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node;

typedef struct linked_list_t{
   node *head,*tail;
}linked_list;


int insert(linked_list *list,int item){
    node *new_node = malloc(sizeof(node));
    new_node->data = item;
    new_node->link = NULL;

    list->head = new_node;
    list->tail = new_node;

    return 0;
}

int main(){
    linked_list *list = malloc(sizeof(linked_list));
    list->head = NULL;
    list->tail = NULL;
    insert(list,2);
    return 0;
}