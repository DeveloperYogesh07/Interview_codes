#include<stdio.h>

int main(){
    int input,reminder,result=0;
    scanf("%d",&input);


while(input != 0){
reminder = input%10;
result = result+reminder;
input = input/10;
}

printf("%d",result);

}