#include<stdio.h>
#include<math.h>
int main(){
   int  val1,value,count=0;
   printf("please enter a number");
   scanf("%d",&value);
    val1 = ceil(sqrt(value));

    for(int i=2;i<=val1;i++){
         if(value%i==0){
            count = 1;
         }
    }
 if(count==0 && value !=1 || value == 2 || value == 3)
    printf("the number is prime");
    else
    printf("number is not prime");


}