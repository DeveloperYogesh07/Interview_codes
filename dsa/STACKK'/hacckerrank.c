#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define capacity 100
struct Stack
{
    int top;
    int arr[capacity];
};

void push(struct Stack *s, int data)
{
    if (s->top + 1 == capacity)
        ;
    else
    {
        s->top += 1;
        s->arr[s->top] = data;
    }
}
int pop(struct Stack *s)
{
    if (s->top == -1)
        ;
    else
        return s->arr[s->top--];
    return -1;
}

int main()
{
    char arr[capacity];
    char temp[10];
    struct Stack b;
    b.top = -1;
    int i, k;
    int num1, num2;
    i = 0;
    scanf("%[^\n]%*c", arr);
    while (arr[i])
    {
        if (arr[i] == ' ')
            i++;
        else if (arr[i] >= 48 && arr[i] <= 57)
        {
            k = 0;
            do
            {
                temp[k] = arr[i];
                k++;
                i++;
            } while (arr[i] >= 48 && arr[i] <= 57);
            temp[k] = '\0';
            push(&b, atoi(temp));
        }
        else if (b.top - 1 == -1)
            break;
        else
        {
            num1 = pop(&b);
            num2 = pop(&b);
            switch (arr[i])
            {
            case '+':
                num2 += num1;
                break;
            case '-':
                num2 -= num1;
                break;
            case '*':
                num2 *= num1;
                break;
            case '/':
                num2 /= num1;
                break;
            }
            push(&b, num2);
            i++;
        }
    }
    if (arr[i])
        printf("0");
    else
        printf("%d", b.arr[b.top]);
    return 0;
}
