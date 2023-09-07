// Returning a pointer to a structure from the function

#include<stdio.h>
#include<stdlib.h>

struct point{
  int x;
  int y;
};


struct point *fun(int a, int b){
    struct point *ptr = (struct point*)malloc(sizeof(struct point));
    ptr->x = a;
    ptr->y = b;
    return ptr;
}

void print(struct point *p){
    printf("%d %d\n",p->x,p->y);
}

int main(){
    struct point *ptr1,*ptr2;
    ptr1 = fun(2,3);
    ptr2 = fun(5,6);

    print(ptr1);
    print(ptr2);

}