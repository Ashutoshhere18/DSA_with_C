
//7. Look at this series: 58, 52, 46, 40, 34, ... What number should come next?

#include<stdio.h>

void main(){
    int i,num=52;

    for(i=1;i<=5;i++){
         printf("%d,",num);
         num-=6;
    }
}