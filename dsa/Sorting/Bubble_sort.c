#include <stdio.h>

int main()
{
    int array[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int length = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < length - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < length - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
}