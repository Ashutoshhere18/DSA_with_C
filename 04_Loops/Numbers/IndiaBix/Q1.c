// Q1. Look at this series: 2, 1, (1/2), (1/4), ... What number should come next?

#include <stdio.h>

int main() {
    float term = 2.0;
    int i;

    for(i = 1; i <= 5; i++) {
        printf("%g ", term);
        term = term / 2;
    }

    return 0;
}
