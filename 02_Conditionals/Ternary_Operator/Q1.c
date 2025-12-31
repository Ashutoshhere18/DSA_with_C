// Q1 WAP to Find max. from given 2 no. using ternary
// operator.

#include<stdio.h>

void main(){
    int a, b, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b;

    printf("\nMaximum number = %d", max);
}
