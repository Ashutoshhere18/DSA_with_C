
// 5. Look at this series: 53, 53, 40, 40, 27, 27, ... What number should come next?

#include<stdio.h>

void main(){
    int i;
    int result=53;
    for(i=1;i<=7;i++){
       
        if(i%2==1){
         printf("%d,",result);
        
        }
        else{
         printf("%d,",result);
         result-=13;
        }
    }
}