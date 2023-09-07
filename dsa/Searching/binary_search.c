// Binary search is effeicent than linear search
#include <stdio.h>
#include <math.h>

int binarySearch(int arr[], int length, int element)
{
    int left = 0;
    int right = length - 1;
    while (left <= right)
    {
        int mid = floor((left + right) / 2);
        if (element == arr[mid])
        {
            return mid;
        }
        else if (element < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int length = sizeof(array) / sizeof(array[0]);
    int element_to_found = 500;
    int found_at_index = binarySearch(array, length, element_to_found);
    printf("element found on %d",found_at_index);
}
