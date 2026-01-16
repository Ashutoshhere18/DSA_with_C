#include<stdio.h>

int main(){
int r,c,i,j;

printf("Enter number of rows:");
scanf("%d",&r);

printf("Enter number of columns:");
scanf("%d",&c);

int a[r][c];

for(i=0;i<r;i++){
for(j=0;j<c;j++){
printf("Enter element a[%d][%d]:",i,j);
scanf("%d",&a[i][j]);
}
}

printf("\nRow wise sum:\n");
for(i=0;i<r;i++){
int sum=0;
for(j=0;j<c;j++){
sum+=a[i][j];
}
printf("Sum of row %d = %d\n",i+1,sum);
}

printf("\nColumn wise sum:\n");
for(j=0;j<c;j++){
int sum=0;
for(i=0;i<r;i++){
sum+=a[i][j];
}
printf("Sum of column %d = %d\n",j+1,sum);
}

return 0;
}
