//Q6. WAP to print N to 1 Only Even.

#include<stdio.h>

void main(){
    int n, i=1;
   
    printf("Enter value of n: ");
    scanf("%d", &n);
     int temp=n;
    /* Using for loop */
    printf("\nUsing for loop:\n");
    for(n; n>= i; n--){
       if(n%2==0){
         printf("%d ", n);
       }
    }

    /* Using while loop */
    printf("\n\nUsing while loop:\n");
    n=temp;
    i = 1;
    while(n>=i){
         if(n%2==0){
         printf("%d ", n);
       }
        n--;
    }

    /* Using do-while loop */
    printf("\n\nUsing do-while loop:\n");
    n=temp;
    i = 1;
    do{
         if(n%2==0){
         printf("%d ", n);
       }
        n--;
    }while(n>=i);
}
