
//11. Look at this series: 1.5, 2.3, 3.1, 3.9, ... What number should come next?

#include <stdio.h>

void main() {
    float term = 1.5;
    int i;

    for(i = 1; i <= 5; i++) {
        printf("%g ", term);
        term = term +0.8;
    }

   
}