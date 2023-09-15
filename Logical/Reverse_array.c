#include<stdio.h>
#include<stdlib.h>

int main(){
    int size;
    printf("Enter the size of array :");
    scanf("%d",&size);

    int *arr = malloc(size*sizeof(int));

    if(arr == NULL){
        printf("Memory allcation falis");
    }
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<size/2;i++){
        int temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }

    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    free(arr);
}