
struct charset{
  int i;
  char c;
};

void keyvalue(int *i,char *c){
  scanf("%d %c",i,c);
}


int main(){
  struct charset s;
  keyvalue(&s.i,&s.c);
}