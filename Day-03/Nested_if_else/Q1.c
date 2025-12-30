// Q1.WAP to Find min. from given 3 no. using nested
// if else.

#include<stdio.h>

void main(){
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a < b){
        if(a < c)
            printf("\nMinimum number = %d", a);
        else
            printf("\nMinimum number = %d", c);
    }
    else{
        if(b < c)
            printf("\nMinimum number = %d", b);
        else
            printf("\nMinimum number = %d", c);
    }
}
