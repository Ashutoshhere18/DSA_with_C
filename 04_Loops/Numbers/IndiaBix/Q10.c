// 10. Look at this series: 31, 29, 24, 22, 17, ... What number should come next?

#include<stdio.h>

void main(){
    int i;
    int result=31;
    for(i=1;i<=6;i++){
       
        if(i%2==1){
         printf("%d,",result);
         result-=2;
        
        }
        else{
         printf("%d,",result);
         result-=5;
        }
    }
}