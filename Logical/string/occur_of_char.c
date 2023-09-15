#include<stdio.h>

#include<string.h>

int main(){

    char input[20];
    scanf("%[^\n]%*c",input);
    int length=0;
    int count;

    for(int i=0;input[i] != '\0';i++){
         length++;
    }
    for(int i=0;i<length;i++){
        count = 0;
        for(int j=0;j<length;j++){
            if(input[i] == input[j]){
                count++;
            }
        }
        printf("the %c occur %d times \n",input[i],count);
    }

}