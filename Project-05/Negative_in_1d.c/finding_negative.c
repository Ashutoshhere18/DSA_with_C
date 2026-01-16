#include <stdio.h>

void main() {
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements
    for(i = 0; i < n; i++) {
        printf("Enter element arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Display negative elements
    printf("\nNegative elements in the array are:\n");
    for(i = 0; i < n; i++) {
        if(arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }

}
