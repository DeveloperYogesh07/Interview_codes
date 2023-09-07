#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int top=-1,stack[100];
int pop(){
    
    if(top!=-1){
    int ele=stack[top];
    top--;
    return ele;
    }
    return -1;
}
void push(int x){
  top++;
    stack[top]=x;
}
void eval(char c,int operand1,int operand2){
    switch(c){
        case '+':push(operand2+operand1);
            break;
        case '-':push(operand2-operand1);
            break;
        case '/':push(operand2/operand1);
            break;
        case '*':push(operand1*operand2);
            break;
    }
}
int main() {
 
    char arr[50],ch;
    scanf("%[^\n]",arr);
    int operand1,operand2,ans;
    
    for(int i=0;arr[i]!='\0';i++){
        ch=arr[i];
        if(ch>='0'&&ch<='9')
        {
            if(arr[i+1]==' '){
                push(ch-48);
            }
            else{
                int sum=0;
                while(arr[i]!=' '){
                  sum=sum*10+(arr[i]-'0');
                    i++;
                }
                push(sum);
            }      
        }
        else if(ch!=' ')
            {
                operand1=pop();
                operand2=pop();
                if(operand1==-1 || operand2==-1)
                {
                    printf("%d",0);
                    return 0;
                }
                else
                    eval(ch,operand1,operand2);
            }
    }
    ans=pop();
    printf("%d",ans);
    return 0;
}