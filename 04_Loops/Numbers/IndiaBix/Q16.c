// 16. Look at this series: 80, 10, 70, 15, 60, ... What number should come next?

#include<stdio.h>

void main(){
    int i;
    int num=80;
    int num2=10;
    for(i=1;i<=6;i++){
         if(i%2==1){
            printf("%d,",num);
            num-=10;
         }else{
            printf("%d,",num2);
            num2+=5;
         }
    }
}