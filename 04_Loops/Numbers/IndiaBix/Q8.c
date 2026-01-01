
// 8. Look at this series: 3, 4, 7, 8, 11, 12, ... What number should come next?

#include<stdio.h>

void main(){
    int i;
    int result=3;
    for(i=1;i<=7;i++){
       
        if(i%2==1){
         printf("%d,",result);
         result+=1;
        
        }
        else{
         printf("%d,",result);
         result+=3;
        }
    }
}