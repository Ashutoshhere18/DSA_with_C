// 3.WAP to find a the answer given formula (x+y)3.

#include<stdio.h>

void main(){
    int x,y;

    printf("Enter x and y:");
    scanf("%d%d",&x,&y);
int wholecube= x*x*x + y*y*y+ 3*x*x*y+ 3*x*y*y ;
    printf("\n (%d+%d)3 => %d",x,y,wholecube);


}