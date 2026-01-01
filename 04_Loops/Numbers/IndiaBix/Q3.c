
//3. Look at this series: 36, 34, 30, 28, 24, ... What number should come next?


#include<stdio.h>

void main(){
    int i;
    int result=36;
    for(i=1;i<=6;i++){
       
        if(i%2==1){
         printf("%d,",result);
         result-=2;
        }
        else{
         printf("%d,",result);
         result-=4;
        }
    }
}