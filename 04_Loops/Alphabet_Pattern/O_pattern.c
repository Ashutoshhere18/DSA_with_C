//   * * *  
// *       *
// *       *
// *       *
// *       *
// *       *
//   * * *  

#include<stdio.h>

int main(){
    int i,j;
    int rows=7, cols=5;

    for(i=1;i<=rows;i++){
        for(j=1;j<=cols;j++){
            if((i==1 && j>1 && j<5) ||
               (i==7 && j>1 && j<5) ||
               (j==1 && i>1 && i<7) ||
               (j==5 && i>1 && i<7))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
