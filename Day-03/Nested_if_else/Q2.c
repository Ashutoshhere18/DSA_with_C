// Q2.WAP to Find max. from given 4 no. using nested
// if else.

#include<stdio.h>

void main(){
    int a, b, c, d;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(a > b){
        if(a > c){
            if(a > d)
                printf("\nMaximum number = %d", a);
            else
                printf("\nMaximum number = %d", d);
        }
        else{
            if(c > d)
                printf("\nMaximum number = %d", c);
            else
                printf("\nMaximum number = %d", d);
        }
    }
    else{
        if(b > c){
            if(b > d)
                printf("\nMaximum number = %d", b);
            else
                printf("\nMaximum number = %d", d);
        }
        else{
            if(c > d)
                printf("\nMaximum number = %d", c);
            else
                printf("\nMaximum number = %d", d);
        }
    }
}
