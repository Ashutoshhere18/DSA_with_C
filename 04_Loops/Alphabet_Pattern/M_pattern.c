// *       * 
// * *   * * 
// *   *   * 
// *       * 
// *       * 
// *       * 
// *       * 

#include<stdio.h>

int main(){
    int i,j;
    int rows=7, cols=5;

    for(i=1;i<=rows;i++){
        for(j=1;j<=cols;j++){
            if(j==1 || j==cols || 
               (i==2 && j==2) || 
               (i==2 && j==4) || 
               (i==3 && j==3))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
