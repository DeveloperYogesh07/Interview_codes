//  returning structure variable from a function
#include<stdio.h>

struct point{
    int x;
    int y;
};

struct point modify(struct point p){
    p.x = p.x+5;
    p.y = p.y-5;
    return p;
}

void print(struct point p){
    printf("%d %d\n",p.x,p.y);
}


int main(){
    struct point p = {23,24};
    struct point p1 = {25,26};

    p = modify(p);
    p1 = modify(p1);
    print(p);
    print(p1);
}