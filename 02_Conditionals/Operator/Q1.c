// 1.WAP to find a the answer given formula (x+y)2.

#include<stdio.h>

void main(){
    int x,y;

    printf("Enter x and y:");
    scanf("%d%d",&x,&y);
int wholesquare= x*x + y*y + 2*x*y;
    printf("\n (%d+%d)2 => %d",x,y,wholesquare);


}