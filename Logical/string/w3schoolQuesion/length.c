#include<stdio.h>



int main(){
  char input[20],length = 0;
    scanf("%s",&input);

    for(int i=0;input[i] != '\0';i++){
      length++;
    }
    printf("length is %d",length);
}
