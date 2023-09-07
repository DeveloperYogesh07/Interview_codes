#include<stdio.h>
#include<string.h>
#include <stdbool.h>

int main(){
    char string1[20];
    char string2[20];
    bool equal = true;
    printf("Enter first string:");
    scanf("%s",string1);
    printf("Enter second string:");
    scanf("%s",string2);

    for(int i = 0;i<strlen(string1);i++){
              if(string1[i] != string2[i]){
                equal = false;
              }
        
    }
    if(equal == false){
        printf("string are not equal!");
    }
   else{
    printf("string are equal!");
}


}