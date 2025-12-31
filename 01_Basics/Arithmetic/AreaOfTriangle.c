// 4. WAP to Find area of triangle.

#include<stdio.h>

void main(){
    float base, height, area;

    printf("Enter base and height of triangle: ");
    scanf("%f %f", &base, &height);

    area = 0.5 * base * height;

    printf("\nArea of Triangle = %.2f", area);
}
