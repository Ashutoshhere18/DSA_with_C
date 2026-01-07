// * * * *
// *
// *
// *
// *
// *
// * * * *

#include<stdio.h>

int main() {
    int i, j;
    int rows=7, cols=4;

    for(i=1;i<=rows;i++){
        for(j=1;j<=cols;j++){
            if(i==1 || i==7 || j==1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
