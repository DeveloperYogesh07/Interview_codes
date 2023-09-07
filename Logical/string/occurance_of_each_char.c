#include<stdio.h>

#include<string.h>

int main(){
   char input[] = "devesh";
//    char result[] ={0};
   int count = 0;

//    printf("Please Enter your name!");
//    scanf("%s",input);

   for(int i=0;i<=strlen(input)-1;i++){
    count = 0;
    for(int j=0;j<=strlen(input)-1;j++){
        if(input[i]==input[j]){
            count++;
        }
   }
        printf("The %c is %d times\n",input[i],count);
    }



}