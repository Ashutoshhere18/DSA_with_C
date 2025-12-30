
// 5.WAP to find a the answer given formula (x+y+z)3.


#include<stdio.h>

void main(){
    int x, y, z;

    printf("Enter x, y and z: ");
    scanf("%d %d %d", &x, &y, &z);

    int wholecube = x*x*x + y*y*y + z*z*z 
                    + 3*(x+y)*(y+z)*(z+x);

    printf("\n(%d+%d+%d)^3 => %d", x, y, z, wholecube);
}
