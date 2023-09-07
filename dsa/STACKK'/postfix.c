#include <stdio.h>
#include <string.h>

char input[20];
int stack_arr[10];
int top = -1;
int A,B;

void push(int data)
{
    top = top + 1;
    stack_arr[top] = data;
}

int pop(){
    int value;
    value = stack_arr[top];
    top = top-1;
    return value;

}

int main()
{

    printf("Enter the input:");
    scanf("%s", input);

    for (int i = 0; i <= strlen(input); i++)
    {
        if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/')
        {
           A = pop();
           B = pop();
        }
        else
        {
            push(input[i]);
        }

    }
}