// 3. WAP to Find area of rectangle.

#include<stdio.h>

void main(){
    int length, breadth, area;

    printf("Enter length and breadth: ");
    scanf("%d %d", &length, &breadth);

    area = length * breadth;

    printf("\nArea of Rectangle = %d", area);
}
