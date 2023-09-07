#include<stdio.h>

struct Point{
    int x;
    float y;
};

void print(struct Point p){
    printf("%d %.2f\n",p.x,p.y);
}

int main(){
    struct Point p1 = {1,2.2};
    struct Point p2 = {3,4.3};

    print(p1);
    print(p2);

    return 0;
}