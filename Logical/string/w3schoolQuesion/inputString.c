#include<stdio.h>

int main(){
    char input[20];
   printf("ENter the string:");
   scanf("%[^\n]%*c",input);

   printf("%s",input);


}