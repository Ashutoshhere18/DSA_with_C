
// 18. Look at this series: 5.2, 4.8, 4.4, 4, ... What number should come next?

#include <stdio.h>

void main() {
    float term = 5.2;
    int i;

    for(i = 1; i <= 5; i++) {
        printf("%g ", term);
        term -=0.4 ;
    }


}