#include <stdio.h>
#include <string.h>

char *reverse(char arr[])
{
    int length = strlen(arr);
    for (int i = 0; i < length / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[length - 1 - i];
        arr[length - 1 - i] = temp;
    }
    return arr;
}

int main()
{
    char input[100];
    char reversed[100];
    printf("Enter the string:");
    scanf("%[^\n]%*c", input);

    printf("%s\n", reverse(input));
    printf("%s", reverse(input));
}