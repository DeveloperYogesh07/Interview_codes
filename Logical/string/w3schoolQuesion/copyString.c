#include<stdio.h>
#include<string.h>

int main(){
   char input[20],copy[20];

   printf("ENTER THE STRING TO DUPLICATE:");
   scanf("%[^\n]%*C",input);

printf("%d\n",strlen(input));
for(int i=0;i<strlen(input);i++){
      copy[i]=  input[i]; 
}

copy[strlen(copy)] = '\0';

printf("your input is %s\n",input);
printf("the duplicate string is %s",copy);
return 0;


}