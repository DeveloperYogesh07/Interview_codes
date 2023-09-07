/* a stack is a linear data structe in which the insertion and deletion are allowed only at the end,which is called top of stack*/


#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int stack_arr[MAX];
int top = -1;
void push(int data);
int pop();
void print();
int main(){
   int data;
    push(1);
    push(2);
    push(3);
    push(4);
     data = pop();
    // data = pop();
    // data = pop();
    // data = pop();
    print();
    return 0;
}

void push(int data){
    if(top == MAX - 1){
        printf("stack overflow:");
        return;
    }
    top = top+1;
    stack_arr[top] = data;
}
int pop(){
    int value;
    if(top == -1){
        printf("stack underflow:");
        exit(1);
    }
    value = stack_arr[top];
    top = top-1;
    return value;
}
void print(){
    if(top == -1){
        printf("stack underflow:");
        return;
        }
     else{
       for(int i = top;i>=0;i--){
         printf("%d",stack_arr[i]); 
         printf("\n");    
          }
     }
   
   
 }
