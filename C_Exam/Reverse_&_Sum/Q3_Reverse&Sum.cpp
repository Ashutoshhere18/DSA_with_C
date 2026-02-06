#include <stdio.h>

void ReverseAndSum(int *arr, int n) {
    int sum=0;

    printf("Array elements in reverse order:\n");
    for (int i=n-1; i>=0;i--) {
        printf("%d ",arr[i]);
        sum += arr[i];
    }

    printf("\nSum of all elements: %d\n", sum);
}

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

   ReverseAndSum(&arr, n);

    return 0;
}
