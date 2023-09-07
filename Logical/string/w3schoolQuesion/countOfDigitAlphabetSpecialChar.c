#include <stdio.h>
#include <string.h>

int main()
{
    char input[40];
    int numbers = 0, character = 0, special = 0;
    printf("please enter the input::");
    scanf("%[^\n]%*c", input);

    for (int i = 0; i < strlen(input); i++)
    {
        if(input[i] >= '0' && input[i] <= '9'){
            numbers++;
        }
        else if(input[i] == '!' || input[i] == '@' || input[i] == '#' || input[i] == '$' ||
            input[i] == '%' || input[i] == '^' || input[i] == '&' || input[i] == '*'){
            special++;
        }
        else if(input[i] >= 'A' && input[i] <= 'Z' || input[i] >= 'a' && input[i] <= 'z'){
            character++;
        }
    }
    printf(" the numbers are :%d\n",numbers);
    printf("the special characters are: %d\n",special);
    printf(" the characters are :%d",character);
}