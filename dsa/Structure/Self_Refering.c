//  we are creating self referntial structure


#include<stdio.h>

struct code{
    int i;
    char c;
    struct code *ptr;
};

int main(){
    struct code var1;
    struct code var2;
 var1.i = 20;
 var1.c = 'a';
 var1.ptr = NULL;

 var2.i = 22;
 var2.c = 'b';
 var2.ptr = NULL;

      var1.ptr =  &var2;

      printf("%d %c",var1.ptr->i, var1.ptr->c);
}