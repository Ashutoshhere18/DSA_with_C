//  WAP to perform all arithmetic operator such as
// +, -, *, /, %

#include<stdio.h>

void main(){
    int a,b;

printf("Enter a:");
scanf("%d",&a);
printf("\n Enter b:");
scanf("%d",&b);

int sum=a+b;
printf("\nThe addition of a & b is: %d",sum);

int sub=a-b;
printf("\nThe subtraction of a & b is: %d",sub);

int mul=a*b;
printf("\nThe multiplication of a & b is: %d",mul);

float div=a/b;
printf("\nThe division of a & b is: %f",div);
}
