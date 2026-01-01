//Q3. WAP to print 1 to n

#include<stdio.h>

void main(){
    int n, i;

    printf("Enter value of n: ");
    scanf("%d", &n);

    /* Using for loop */
    printf("\nUsing for loop:\n");
    for(i = 1; i <= n; i++){
        printf("%d ", i);
    }

    /* Using while loop */
    printf("\n\nUsing while loop:\n");
    i = 1;
    while(i <= n){
        printf("%d ", i);
        i++;
    }

    /* Using do-while loop */
    printf("\n\nUsing do-while loop:\n");
    i = 1;
    do{
        printf("%d ", i);
        i++;
    }while(i <= n);
}
