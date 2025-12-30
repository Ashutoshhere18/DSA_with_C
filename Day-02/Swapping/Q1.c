// Q1.WAP to Swap two variables (with using third variable).

#include<stdio.h>

void main(){
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping:");
    printf("\na = %d", a);
    printf("\nb = %d", b);
}
