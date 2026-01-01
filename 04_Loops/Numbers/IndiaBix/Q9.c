// 9. Look at this series: 8, 22, 8, 28, 8, ... What number should come next?

#include<stdio.h>

void main(){
    int i;
    int num=8;
    int num2=22;
    for(i=1;i<=6;i++){
         if(i%2==1){
            printf("%d,",num);
         }else{
            printf("%d,",num2);
            num2+=6;
         }
    }
}