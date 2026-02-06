//Write a C program to find cube of each elements of an 
//1D array using Pointer.

#include<stdio.h>

int cube(int *arr,int n){
int i,mul=1;


for(i=0;i<n;i++){
mul=arr[i]*arr[i]*arr[i];
printf("\nCube of %d is %d.",arr[i],mul);
}
}

int main(){
int n,i,result;

printf("Enter Array Size: ");
scanf("%d",&n);

int arr[n];

for(i=0;i<n;i++){
printf("Enter arr[%d]: ",i);
scanf("%d",(arr+i));
}

cube(&arr,n);

return 0;
}