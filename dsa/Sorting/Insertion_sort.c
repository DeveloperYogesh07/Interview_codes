#include<stdio.h>

int main(){
    int array[] = {8,9,1,35,6,7,5};
    int length = sizeof(array)/sizeof(array[0]);

    for(int i=1;i<length;i++){
        int temp = array[i];
        int j = i-1;

        while(j >= 0 && array[j]>temp){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = temp;
    }
  for(int i=0;i<length;i++){
    printf("%d ",array[i]);
  }



}