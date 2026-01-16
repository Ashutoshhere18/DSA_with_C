#include<stdio.h>

int main(){
int rows,cols,i,j;

printf("Enter number of rows:");
scanf("%d",&rows);

printf("Enter number of columns:");
scanf("%d",&cols);

int arr[rows][cols],trans[cols][rows];

for(i=0;i<rows;i++){
for(j=0;j<cols;j++){
printf("Enter element arr[%d][%d]:",i,j);
scanf("%d",&arr[i][j]);
}
}

for(i=0;i<rows;i++){
for(j=0;j<cols;j++){
trans[j][i]=arr[i][j];
}
}

printf("\nOriginal Matrix:\n");
for(i=0;i<rows;i++){
for(j=0;j<cols;j++){
printf("%d ",arr[i][j]);
}
printf("\n");
}

printf("\nTranspose Matrix:\n");
for(i=0;i<cols;i++){
for(j=0;j<rows;j++){
printf("%d ",trans[i][j]);
}
printf("\n");
}

return 0;
}
