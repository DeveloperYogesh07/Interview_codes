#include<stdio.h>
#include<stdlib.h>
#define MAX 4
 


int top = -1;
int arr[MAX];

void push(int data){
    if(top == MAX-1){
        printf("Stack overflow");
      return;
    }
    top++;
    arr[top] = data;
}

int pop(){
    if(top == -1){
        printf("stack is empty");
       exit(1);
    }
  int data = arr[top];
  top--;
  return data;
}

void display(){
    for(int i=top;i>=0;i--){
        printf("%d \n",arr[i]);
    }
}


 int main(){
    push(2);
    push(3);
    push(4);
    int data = pop();
    printf("deleted node is %d\n",data);
    int data1 = pop();
    printf("deleted node is %d\n",data1);
    int data2 = pop();
    printf("deleted node is %d\n",data2);
    pop();
    display();
 }