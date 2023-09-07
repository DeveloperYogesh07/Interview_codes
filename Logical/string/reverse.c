#include<stdio.h>
#include<string.h>


int main(){
    char temp;

 char arr[] = "yogesh";
   int length = strlen(arr);
//    printf("%d",length);

 for(int i=0;i<length/2;i++){
      temp = arr[i];
      arr[i] = arr[length-i-1];
      arr[length-i-1] = temp;
 }

 printf("%s",arr);

}