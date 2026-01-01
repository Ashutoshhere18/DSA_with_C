//Q5. WAP to print 1 to N Only Odd

#include<stdio.h>

void main(){
    int n, i;

    printf("Enter value of n: ");
    scanf("%d", &n);

    /* Using for loop */
    printf("\nUsing for loop:\n");
    for(i = 1; i <= n; i++){
        if(i%2==1){
          printf("%d ", i);
        }
    }

    /* Using while loop */
    printf("\n\nUsing while loop:\n");
    i = 1;
    while(i <= n){
         if(i%2==1){
          printf("%d ", i);
        }
        i++;
    }

    /* Using do-while loop */
    printf("\n\nUsing do-while loop:\n");
    i = 1;
    do{
        if(i%2==1){
          printf("%d ", i);
        }
        i++;
    }while(i <= n);
}
