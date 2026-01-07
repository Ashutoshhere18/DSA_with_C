// A B C D E
//   B C D E
//     C D E
//       D E
//         E

#include<stdio.h>

void main(){
    int i,j,k;
    char c;
    for(i=1;i<=5;i++){

        c='A'+i-1;
        for(k=i;k>1;k--){
         printf("  ");
        }
        for(j=5;j>=i;j--){
        printf("%c ",c);
        c++;
        }
        printf("\n");
    }
    
    
}