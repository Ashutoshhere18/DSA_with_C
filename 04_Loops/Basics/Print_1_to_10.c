//Q1. WAP to print 1 to 10

#include<stdio.h>

void main(){
    int  i;

    
    /* Using for loop */
    printf("\nUsing for loop:\n");
    for(i = 1; i <= 10; i++){
        printf("%d ", i);
    }

    /* Using while loop */
    printf("\n\nUsing while loop:\n");
    i = 1;
    while(i <= 10){
        printf("%d ", i);
        i++;
    }

    /* Using do-while loop */
    printf("\n\nUsing do-while loop:\n");
    i = 1;
    do{
        printf("%d ", i);
        i++;
    }while(i <= 10);
}
