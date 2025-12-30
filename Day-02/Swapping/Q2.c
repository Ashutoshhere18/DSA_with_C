// 2.WAP to Swap two variables (without using third
// variable)

#include<stdio.h>

void main(){
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter swapping:");
    printf("\na = %d", a);
    printf("\nb = %d", b);
}
