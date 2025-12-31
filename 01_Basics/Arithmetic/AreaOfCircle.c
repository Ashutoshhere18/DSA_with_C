// Q 1.WAP to Find area of circle.

#include<stdio.h>

void main(){
    float r, area;

    printf("Enter radius of circle: ");
    scanf("%f", &r);

    area = 3.14 * r * r;

    printf("\nArea of Circle = %.2f", area);
}
