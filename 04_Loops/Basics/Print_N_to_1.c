//Q4. WAP to print N to 1.

#include<stdio.h>

void main(){
    int n, i=1;

    printf("Enter value of n: ");
    scanf("%d", &n);

    /* Using for loop */
    printf("\nUsing for loop:\n");
    for(n; n>= i; n--){
        printf("%d ", n);
    }

    /* Using while loop */
    printf("\n\nUsing while loop:\n");
    i = 1;
    while(n>=i){
        printf("%d ", n);
        n--;
    }

    /* Using do-while loop */
    printf("\n\nUsing do-while loop:\n");
    i = 1;
    do{
        printf("%d ", n);
        n--;
    }while(n>=i);
}
