#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the size of array :\n");
    scanf("%d",&n);

    int *arr = malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
        arr[i] = i*10;
  }
  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }

}