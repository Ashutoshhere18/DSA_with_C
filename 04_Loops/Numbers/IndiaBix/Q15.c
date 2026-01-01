
// 15. Look at this series: 544, 509, 474, 439, ... What number should come next?

#include<stdio.h>

void main(){
    int i;
    int num=544;
    for(i=1;i<=5;i++){
      printf("%d,",num);
      num-=35;
    }
}