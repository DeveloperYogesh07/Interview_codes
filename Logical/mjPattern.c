#include <stdio.h>

int main()
{

    int n,mid,num=1;
    printf("Enter number of rows :");
    scanf("%d", &n);
    mid = n/2+1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i > 1 && i < n && j > 1 && j < n && j!=mid)  
            {
                printf(" ");
            }
            else
            {
                printf("%d",num);
                num++;
            }
        }
        printf("\n");
    }
}