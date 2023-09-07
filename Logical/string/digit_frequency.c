#include<stdio.h>
#include<string.h>

int main(){
 char input[200];
  int arr[] = {'0','1','2','3','4','5','6','7','8','9'};
  int count;
  printf("Enter the string::");
  scanf("%s",input);

  for(int i=0;i<10;i++){
    count = 0;
    for(int j=0;j<=strlen(input);j++){
        if(arr[i]==input[j]){
            count++;
        }
    }
        printf("%d ",count);
  }
  

}