// *   *
// *  *
// * *
// **
// * *
// *  *
// *   *

#include<stdio.h>

int main(){
    int i,j;
    int rows=7, cols=4;

    for(i=1;i<=rows;i++){
        for(j=1;j<=cols;j++){
            if(j==1 || (i==4 && j==2) || (i==3 && j==3) || (i==2 && j==4) ||
               (i==5 && j==3) || (i==6 && j==4) || (i==1 && j==2) || (i==7 && j==2))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
