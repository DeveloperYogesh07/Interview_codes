#include<stdio.h>
#include<stdlib.h>

typedef struct node{
 int data;
 struct node *next;
}node;

typedef struct linked_list_t{
    node *head,*tail;
}linked_list;

node *transfer_to(linked_list *list,int index){
    node *ptr = list->head;
    int current = 0;
    while(ptr != NULL){
        if(current == index){
        return ptr;
      }
     ptr = ptr->next;
     current++;
    }
    return NULL;
}


int add_at_index(linked_list *list,int item,int index){
    node *new_node = malloc(sizeof(node));
    new_node->data = item;
    new_node->next = NULL;
    if(list->head == NULL){
        list->head = new_node;
        list->tail = new_node;
    }
    else if(index == 0){
        new_node->next = list->head;
         list->head = new_node;
    }
    else{
     node *prev_node = transfer_to(list,index-1);
      if(prev_node == NULL){
        printf("index not found!!\n");
        return -1;
      }
        new_node->next = prev_node->next;
        prev_node->next = new_node;
     if(new_node->next == NULL){
        list->tail = new_node;
     }
    return 0;
    }
}

void display(linked_list *list){
    node *temp = list->head;
    while(temp != NULL){
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}


int main(){
    linked_list *list = malloc(sizeof(linked_list));
    add_at_index(list,0,0);
    add_at_index(list,1,1);
    add_at_index(list,2,2);
    add_at_index(list,3,3);
    add_at_index(list,4,1);
    add_at_index(list,4,0);
    display(list);

    node *temp = list->head;
    while (temp != NULL) {
        node *next = temp->next;
        free(temp);
        temp = next;
    }
    free(list);

    return 0;
}