#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node;

node *front = NULL;
node *rare = NULL;

int enqueue(int item){
    node *new_node = malloc(sizeof(node));
    new_node->data = item;
    new_node->link = NULL;

    if(front == NULL && rare == NULL){
        front = new_node;
        rare = new_node;
    }
    else{
         rare->link = new_node;
         rare = new_node;
    }
    return 0;

}

void dequeue(){
    node *temp = NULL;
    if(front == NULL){
        printf("queue is empty!!\n");
    }
    else{
        temp = front;
        front =  front->link;
        free(temp);
    }
}

void display(){
    node *ptr = front;
    while(ptr != NULL){
        printf("%d\n",ptr->data);
        ptr = ptr->link;
    }
}

void peek(){
   printf("peek of queue is :%d\n",front->data);
}




int main(){
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    peek();
    dequeue();
    dequeue();
    peek();
    display();
}