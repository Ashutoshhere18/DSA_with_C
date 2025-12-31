// WAP to Find min. no. from given 2 no. using if else.

#include<stdio.h>

void main(){
    int num1,num2;

printf("Enter Number 1 and Number 2:");
scanf("%d%d",&num1,&num2);

if(num1<num2){
 printf("Number 1 is minimum");
}else{
 printf("Number 2 is minimum");
}
}