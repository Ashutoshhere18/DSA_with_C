// Q3.  WAP to Find min. from given 5 no. using nested
// if else.

#include<stdio.h>

void main(){
    int a, b, c, d, e, min;

    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    if(a < b)
        min = a;
    else
        min = b;
    if(c < min)
        min = c;
    if(d < min)
        min = d;
    if(e < min)
        min = e;

    printf("\nMinimum number = %d", min);
}
