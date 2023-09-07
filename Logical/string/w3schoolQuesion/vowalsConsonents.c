#include<stdio.h>
#include<string.h>



int main(){
   char input[30];
   int vowals = 0,consonents = 0;
   printf("Enter the string:");
   scanf("%[^\n]%*c",input);


   for(int i=0;i<strlen(input);i++){
    if(input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u' || input[i] == 'A' || input[i] == 'E' || input[i] == 'I' || input[i] == 'O' || input[i] == 'U'){
         vowals++;
    }
    else{
        consonents++;
    }
   }
   printf("the vowals are %d \n",vowals);
   printf("the consonents are %d ",consonents);








}
