// 15. Look at this series: 201, 202, 204, 207, ... What number should come next?

#include<stdio.h>

void main(){
    int i;
    int num=201;
    for(i=1;i<=5;i++){
      printf("%d,",num);
      num+=i;
    }
}