// 7.WAP to find a the answer given formula (x+y+z)2.

#include<stdio.h>

void main(){
    int x, y, z;

    printf("Enter x, y and z: ");
    scanf("%d %d %d", &x, &y, &z);

    int wholesquare = x*x + y*y + z*z
                      + 2*(x*y + y*z + z*x);

    printf("\n(%d+%d+%d)^2 => %d", x, y, z, wholesquare);
}
