// here we are passing the structure member as argument
#include<stdio.h>

struct Student{
    int id;
    char name[20];
    float marks;
};

void print(int id,char name[],float marks){
    printf("%d %c %.2f",id,name,marks);

}

int main(){
    struct Student s1 = {01,"yogesh",20.3};
    print(s1.id,s1.name,s1.marks);
}

