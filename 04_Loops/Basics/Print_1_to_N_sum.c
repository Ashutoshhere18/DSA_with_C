//Q8. WAP to print Sum of  1 to n

#include<stdio.h>

void main(){
    int n, i;
  int sum=0;
    printf("Enter value of n: ");
    scanf("%d", &n);
    int temp=n;

    /* Using for loop */
    printf("\n Sum Using for loop:\n");
    for(i = 1; i <= n; i++){
       sum=sum+i;
    }

    printf("Sum: %d",sum);



    /* Using while loop */
    printf("\n\n Sum Using while loop:\n");
    sum=0;
    i = 1;
    n=temp;
    while(i <= n){
       sum=sum+i;
        i++;
    }
printf("Sum: %d",sum);




    /* Using do-while loop */
    printf("\n\n Sum Using do-while loop:\n");
    i = 1;
    n=temp;
    sum=0;
    do{
        sum=sum+i;
        i++;
    }while(i <= n);
    printf("Sum: %d",sum);
}
