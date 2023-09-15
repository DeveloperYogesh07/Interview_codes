#include<stdio.h>
#include<string.h>

int main(){
    char arr[20] = "shubham sharma";
    int length = strlen(arr);
    for(int i=0;i<length/2;i++){
         int temp = arr[i];
         arr[i] = arr[length-1-i];
         arr[length-1-i] = temp;
    }
    for(int i=0;i<length;i++){
        printf("%c",arr[i]);
    }
}