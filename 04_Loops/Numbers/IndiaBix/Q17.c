// 17. Look at this series: 2, 6, 18, 54, ... What number should come next?

#include<stdio.h>

void main(){
    int i,j=2;

  for(i=1;i<=5;i++){
     printf("%d,",j);
     j*=3;
  }
}