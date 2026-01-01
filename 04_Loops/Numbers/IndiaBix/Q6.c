
// 6. Look at this series: 21, 9, 21, 11, 21, 13, 21, ... What number should come next?

#include<stdio.h>

void main(){
    int i;
    int num=21;
    int num2=9;
    for(i=1;i<=8;i++){
         if(i%2==1){
            printf("%d,",num);
         }else{
            printf("%d,",num2);
            num2+=2;
         }
    }
}