
// 2. Look at this series: 7, 10, 8, 11, 9, 12, ... What number should come next?

#include<stdio.h>

void main(){
    int i;
    int result=7;
    for(i=1;i<=7;i++){
       
        if(i%2==1){
         printf("%d,",result);
         result+=3;
        }
        else{
         printf("%d,",result);
         result-=2;
        }
    }
}
