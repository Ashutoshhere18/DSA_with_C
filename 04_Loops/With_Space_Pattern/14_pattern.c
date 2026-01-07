//         A
//       A B
//     A B C
//   A B C D
// A B C D E

#include<stdio.h>

void main(){
    int i,j,k;
    char c;
    for(i=1;i<=5;i++){
       
        for(k=i;k<5;k++){
        printf("  ");
        }
         c=65;
        for(j=i;j>=1;j--){
        printf("%c ",c);
        c++;
        }

        printf("\n");
    }
}