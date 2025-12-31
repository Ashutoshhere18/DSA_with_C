// Q2.  WAP to print month names using switch case.

#include<stdio.h>

void main(){
    int c;
    
    printf("\n 1.January\n 2.February\n 3.March\n 4.April\n 5.May\n 6.June\n 7.July\n 8.August\n 9.September\n 10.October\n 11.November\n 12.December");
      printf("\nEnter number:");
    scanf("%d",&c);
    
    switch(c){
        case 1:
        printf("\nJanuary");
        break;
        case 2:
        printf("\nFebruary");
        break;
        case 3:
        printf("\nMarch");
        break;
        case 4:
        printf("\nApril");
        break;
        case 5:
        printf("\nMay");
        break;
        case 6:
        printf("\nJune");
        break;
        case 7:
        printf("\nJuly");
        break;
        case 8:
        printf("\nAugust");
        break;
        case 9:
        printf("\nSeptember");
        break;
        case 10:
        printf("\nOctober");
        break;
        case 11:
        printf("\nNovember");
        break;
        case 12:
        printf("\nDecember");
        break;
    };
   
}