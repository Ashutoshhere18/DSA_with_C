// 12. Look at this series: 14, 28, 20, 40, 32, 64, ... What number should come next?

#include<stdio.h>

void main(){
    int i;
    int result=14;
    for(i=1;i<=7;i++){
       
        if(i%2==1){
         printf("%d,",result);
         result*=2;
        }
        else{
         printf("%d,",result);
         result-=8;
        }
    }
}