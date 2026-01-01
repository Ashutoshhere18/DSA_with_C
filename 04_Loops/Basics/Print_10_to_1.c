//Q3. WAP to print 1 to 10

#include<stdio.h>

void main(){
    int  i;

    
    /* Using for loop */
    printf("\nUsing for loop:\n");
    for(i = 10; i >= 1; i--){
        printf("%d ", i);
    }

    /* Using while loop */
    printf("\n\nUsing while loop:\n");
    i = 10;
    while(i>=1){
        printf("%d ", i);
        i--;
    }

    /* Using do-while loop */
    printf("\n\nUsing do-while loop:\n");
    i = 10;
    do{
        printf("%d ", i);
        i--;
    }while(i >=1);
}