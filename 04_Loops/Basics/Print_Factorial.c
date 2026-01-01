//Q9. WAP to print factorial of N, using  loop.

#include<stdio.h>

void main(){
  
    int factorial=1;
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    int temp=n;
  
    printf("Factorial Using For Loop");
    for(n;n>=1;n--){
  
      factorial=factorial*n;

    
    }
    printf("\nFactorial is: %d",factorial);


    printf("\nFactorial Using While Loop");
  n=temp;
  factorial=1;
  while(n>=1){
    factorial*=n;
    n--;
  }
  printf("\nFactorial is: %d",factorial);



   printf("\nFactorial Using Do...While Loop");
  n=temp;
  factorial=1;
  do{
    factorial*=n;
    n--;
  }while(n>=1);
  printf("\nFactorial is: %d",factorial);
}