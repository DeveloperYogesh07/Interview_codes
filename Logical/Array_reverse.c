#include<stdio.h>


int main(){
  int size;
  
  printf("Enter the size of array\n");
  scanf("%d",&size);
  int result[size];
  int arr[size];
  int j=size-1;



 printf("Enter the elements of array\n");
  for(int i=0;i<size;i++){
     scanf("%d",&arr[i]);
  }
 for(int i=0;i<size;i++){
   result[j] = arr[i];
     j--;
  }

printf("input array is");
for(int i=0;i<size;i++){
    printf(":%d",arr[i]);
}
printf("\nresult array is");
for(int i=0;i<size;i++){
   printf(":%d",result[i]);
}
}