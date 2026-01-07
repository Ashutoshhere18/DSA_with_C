// A B C D E
//   A B C D
//     A B C
//       A B
//         A

#include<stdio.h>

void main(){
    int i,j,k;
    char c;
    for(i=5;i>=1;i--){
       
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