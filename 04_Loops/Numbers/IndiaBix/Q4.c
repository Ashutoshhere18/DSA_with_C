
//4. Look at this series: 22, 21, 23, 22, 24, 23, ... What number should come next?

#include<stdio.h>

void main(){
    int i;
    int result=22;
    for(i=1;i<=7;i++){
       
        if(i%2==1){
         printf("%d,",result);
         result-=1;
        }
        else{
         printf("%d,",result);
         result+=2;
        }
    }
}