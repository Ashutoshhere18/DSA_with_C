#include<stdio.h>

void cube(int *arr,int r,int c ){

    int i,j;

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            int value = *(arr + i*c + j);
            printf("%d ", value*value*value);
        }
        printf("\n");
    }
}

int main(){

    int arr[3][3], i, j;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("enter arr[%d][%d]:",i,j);
            scanf("%d", &arr[i][j]); 
        }
    }

    printf("Cube of elements:\n");
    cube(&arr[0][0], 3, 3);

    return 0;
}
