// Implement a C program to simulate a simple calculator
//  that performs addition, subtraction, multiplication, and division based on user input.

#include<stdio.h>


int main(){

    int a, b,choice;

    printf("\nSimple Calculator Based on User Input\n");

    printf("Enter First Value:");
    scanf("%d",&a);
    printf("\nEnter Second Value:");
    scanf("%d",&b);

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");


    printf("\nEnter your choice:");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        printf("\nAddition of two numbers is: %d",a+b);
        break;
        case 2:
        printf("\nSubtraction of two numbers is: %d",a-b);
        break;
        case 3:
        printf("\nMultiplication of two numbers is: %d",a*b);
        break;
        case 4:
        printf("\nDivision of two numbers is: %d",a/b);
        break;
        default:
        printf("Please Enter Valid Choice!");

    }
return 0;
}