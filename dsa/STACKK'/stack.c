#include<stdio.h>
#include<stdlib.h>
#define MAX 4

int stack_arr[MAX];
int top = -1;


int isFull(){
    if(top == MAX - 1){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(){
    if(top ==  - 1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(int data){
  if(isFull()){
    printf("stack overflow");
    return;
  }
    top = top+1;
    stack_arr[top] = data;
}

int pop(){
    int value;
    if(isEmpty()){
        printf("stack underflow");
        exit(1);
    }
    value = stack_arr[top];
    top = top-1;
    return value;
}

void print(){
    for(int i=top;i>=0;i--){
        printf("%d \n",stack_arr[i]);
    }
}

int main(){
   push(1);
   push(2);
   push(3);
   push(4);
   int deta = pop();
   
   print();

   return 0;


}