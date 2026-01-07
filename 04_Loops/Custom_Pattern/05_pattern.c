// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4     4 3 2 1 
// 1 2 3         3 2 1 
// 1 2             2 1 
// 1                 1 
// 1 2             2 1 
// 1 2 3         3 2 1 
// 1 2 3 4     4 3 2 1 
// 1 2 3 4 5 5 4 3 2 1

#include <stdio.h>
void main() {
    int i, j, k;
    int n = 5; 
 
    for (i = n; i >= 1; i--) {
      
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for (k = 1; k <= (n - i) * 2; k++) {
            printf("  ");
        }
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    for (i = 2; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for (k = 1; k <= (n - i) * 2; k++) {
            printf("  ");
        }
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

}