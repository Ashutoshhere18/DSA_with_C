//Write a C program to find the sum of elements in an array 
//using a function.

#include<stdio.h>

int sum(int *arr,int n){
int i,sum=0;
for(i=0;i<n;i++){
sum+=*(arr+i);
}
return sum;
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

result=sum(arr,n);
printf("Sum of array elements = %d\n",result);

return 0;
}
