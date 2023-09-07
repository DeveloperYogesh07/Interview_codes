#include <stdio.h>
#include <string.h>

int getLength(char input[])
{
    int length = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        if(input[i] != ' ')
        length++;
    }
    return length;
}

int main()
{
    char input[20];

    printf("Enter the name:");

    scanf("%[^\n]%*c", &input);

    int result = getLength(input);

    printf("the total character of your name is :%d", result);

    // for(int i=0;i<7;i++){
    //     scanf("%c",&input[i]);
    // }

    // for(int i =0;i<7;i++){
    //     printf("%c",input[i]);
    //      }
}