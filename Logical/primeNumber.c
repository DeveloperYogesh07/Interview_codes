// printing prime number for given range

#include<stdio.h>
int main(){
int l,u,x,i;
scanf("%d %d",&l,&u);
   for( x=l;x<=u;x++){
    for(int i=2;i<x;i++)
        if(x%i==0)
        break;
    if(i==x)
    printf("%d",x);
  }
}