// pointer to structure as an argument
#include<stdio.h>

struct Student{
  char name[20];
  int id;
  float marks;
  
};

void print(struct Student *s){
  printf("%s %d %.2f\n",s->name,s->id,s->marks);
    
}


void main(){
    struct Student s1 = {"yogesh",20,99.5};
    struct Student s2 = {"mohit",30,88.3};
    print(&s1);
    print(&s2);
}