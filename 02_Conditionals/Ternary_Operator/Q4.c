// Q4. WAP to Find max. from 5 using ternary operator.

#include<stdio.h>

void main(){
    int a,b,c,d,e,max1,max2,max3,max;

      printf("Enter a,b,c,d,e:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    max1=(a>b)?a:b;
    max2=(c>d)?c:d;
    max3=(max1>max2)?max1:max2;
    max=(max3>e)?max3:e;

    printf("\nMaximum Number :%d",max);
}