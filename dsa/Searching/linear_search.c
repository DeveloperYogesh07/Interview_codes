// program for linear search . The array can be sorted or unsorted

#include <stdio.h>

int main()
{
    int array[] = {10, 15, 3, 2, 8, 1, 46, 9, 4, 6};
    int length = sizeof(array) / sizeof(array[0]);
    int dataToFind = 6;
    int found = 0;

    for (int i = 0; i < length; i++)
    {
        if (array[i] == dataToFind)
        {
            printf("element found on index :%d", i);
            found = 1;
            break;
        }
     } 

    if (found == 0)
    {
        printf("element not found");
    }
}
