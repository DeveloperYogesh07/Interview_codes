#include<stdio.h>
#include<stdlib.h>
#define MAX 4

int stack_arr[MAX];
int top = -1;

void push(int data){
   if(top == MAX-1){
    printf("stack overflow:");
    return;
   }
   top = top +1;
   stack_arr[top] = data;
}

void pop(){
    int element;
    if(top == -1){
        printf("stack underflow");
        exit(1);
    }
    element = stack_arr[top];
    top = top-1;
    printf("element removed %d \n",element);
    // return element;
}

void print(){
    for(int i=top;i>=0;i--){
        printf("%d ",stack_arr[i]);
    }
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    pop();
    pop();
    pop();
    print();
    return 0;
}