#include<stdio.h>

void main(){
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18)
        printf("\nYou are eligible for voting.");
    else
        printf("\nYou are not eligible for voting.");
}
