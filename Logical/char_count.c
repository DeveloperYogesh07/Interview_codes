#include<stdio.h>

int main(){
    char input[20];
    int count=0,i=0;
    printf("Enter the string:");
    scanf("%s",input);
 
 while(input[i] != '\0'){
    count++;
    i++;
 }
    printf(" the count is  : %d",count);




    // for(int i=0;input[i] != '\0';i++){
    //     // printf("hello\n");
    //     count++;

    // }
   
}