//         A
//       B A
//     C B A
//   D C B A
// E D C B A

#include<stdio.h>

void main(){
    int i,j,k;
    char c=65;
    for(i=1;i<=5;i++){
       
        for(k=i;k<5;k++){
        printf("  ");
        }
         c='A'+i-1;
        for(j=i;j>=1;j--){
        printf("%c ",c);
        c--;
        }

        printf("\n");
    }
}