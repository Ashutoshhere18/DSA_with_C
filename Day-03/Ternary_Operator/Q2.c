// Q2. WAP to Find max. from 3 using ternary operator.

#include<stdio.h>

void main(){
    int a,b,c,max;

    printf("Enter a,b,c:");
    scanf("%d %d %d",&a,&b,&c);

  max=(a>b)?((a>c)?a:c):((b>c)?b:c);

  printf("%d",max);
}