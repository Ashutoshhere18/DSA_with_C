// Q3. WAP to Find max. from 4 using ternary operator.


#include<stdio.h>

void main(){

    int a,b,c,d,max1,max2,max;

    printf("Enter a,b,c,d:");
    scanf("%d %d %d %d",&a,&b,&c,&d);

 max1=(a>b)?a:b;
 max2=(c>d)?c:d;
 max=(max1>max2)?max1:max2;

  printf("\nMaximum number = %d", max);
}