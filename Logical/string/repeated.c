#include <stdio.h>

int main()
{
    int input = 9456123, rem;

    int arr[9] = {0};

    while (input > 0)
    {
        rem = input % 10;
        if (arr[rem] == 1)
        {
            break;
        }
        arr[rem] = 1;
        input = input / 10;
    }

    if(input > 0){
        printf("yes");
    }
    else{
        printf("no");
    }
}