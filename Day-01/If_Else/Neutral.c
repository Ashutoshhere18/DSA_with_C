// WAP to Find if a given no. is neutral or not using
// ladder if else.

#include<stdio.h>

void main(){
    int a;
    printf("Enter a:");
    scanf("%d",&a);

    if(a>0){
    printf("Not Neutral");
    }else if(a<0){
    printf(" Not Neutral");
    }else{
     printf("Neutral");
    }
}