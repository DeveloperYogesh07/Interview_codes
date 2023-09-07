#include<stdio.h>

int main(){
    int number;
    int result=0, q ,remainder;
    printf("please Enter your number");
    scanf("%d",&number);
    q = number;

  while(q != 0)
  {
    remainder = q%10;
    result = result*10 + remainder;
    q = q/10;
  }

    if(result == number){
        printf("the number is palindrome number");
    }
    else{
        printf("number is not palindrome");
    }
    return 0;
}