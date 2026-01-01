//Q10. WAP to print table of n.

#include<stdio.h>

void main(){
    int n;
    printf("Enter Number to print table:");
    scanf("%d",&n);

    for(int i=1;i<=10;i++){
    
        printf("%d * %d= %d \n",n,i,n*i);
    }
}