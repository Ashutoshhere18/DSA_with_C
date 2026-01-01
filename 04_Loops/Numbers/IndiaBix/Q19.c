// 19. Look at this series: 8, 6, 9, 23, 87 , ... What number should come next?

#include<stdio.h>

void main(){
    int i,j=8,result=2;

    for(i=1;i<=6;i++){
        printf("%d,",j);
       j=j*i-result;
       result++;
    }
}