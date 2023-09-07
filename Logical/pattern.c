#include<stdio.h>
#include<conio.h>

int main(){
    int i,j,k;
    for( i=1;i<=7;i=i+2){
        for( j=i;j<=7;j++){
            printf(" %d ",i);
        }
        printf("\n");
        for( k=0;k<=i;k++){
          printf("*");
        }
    }

printf("\n");
// printf("---------------------------------------------------------\n");

    // for( i=1;i<=7;i=i+2){
    //     for( j=i;j<=7;j++){
    //         printf(" %d ",i);
    //     }
    //     printf("\n");
    //     for( k=0;k<=i;k++){
    //       printf("*");
    //     }
    // }

    for(i=7;i>=1;i=i-2){
        for(j=i;j<=7;j++){
            printf(" %d ",i);
        }
        printf("\n");
         for( k=0;k<=i;k++){
          printf(" ");
        }
    }
}