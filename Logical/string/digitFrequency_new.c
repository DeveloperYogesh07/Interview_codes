#include <stdio.h>
#include<string.h>

int main()
{
    char input[50];
    scanf("%s",&input);
    int count;
    int arr[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    for (int i = 0; i < 10; i++)
    {
        count = 0;
        for (int j = 0; j < strlen(input); j++)
        {
            if (input[j] == arr[i])
            {
                count++;
            }
        }

        printf("%d ", count);
    }
}