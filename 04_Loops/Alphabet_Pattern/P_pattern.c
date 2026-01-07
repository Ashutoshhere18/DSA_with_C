// * * * *
// *     *
// *     *
// * * * *
// *
// *
// *

#include<stdio.h>

int main(){
    int i,j;
    int rows=7, cols=5;

    for(i=1;i<=rows;i++){
        for(j=1;j<=cols;j++){
            if(j==1 || 
              (i==1 && j<=4) || 
              (i==4 && j<=4) || 
              (j==5 && i==2) || 
              (j==5 && i==3))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
