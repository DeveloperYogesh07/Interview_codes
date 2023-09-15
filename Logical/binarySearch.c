#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 56, 57, 58, 59, 60};
    int length = sizeof(arr) / sizeof(arr[0]);
    // printf("%d",length);
    int item_to_search = 60;
    int left = 0;
    int right = length-1;
    int mid;
    while (left <= right)
    {
        mid = (left + right) / 2;
        
            if (item_to_search == arr[mid])
            {
                printf("item found at index %d ", mid);
                return 0;
            }
            else if (item_to_search > arr[mid])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    

return 0;
}