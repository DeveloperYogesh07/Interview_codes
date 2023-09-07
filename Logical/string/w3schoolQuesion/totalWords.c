#include<stdio.h>
#include<string.h>


int main(){
    char input[100];
    int count = 1;
   scanf("%[^\n]%*c",input);
    for(int i=0;i<strlen(input);i++){
        if(input[i]== ' '){
            count++;
        }
    }
    printf("%d",count);


}