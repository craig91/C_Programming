#include <stdio.h>

int main() {
    int num = 100;
    double pi = 3.1415926536;

    double testDecimal = 1.2345;

    printf("Test Decimal --> %.2f\n", testDecimal);
    printf("--------------- \n");

    printf("Integer is %d \n", num);
    printf("Values are %d and %f \n", num, pi);
    

    printf("%%7d displays %3d \n", num);
    printf("%%07d displays %07d\n", num);
    
    printf("Pi is approximately %1.10f\n", pi);
    printf("Right-aligned %20.3f rounded pi\n", pi);
    printf("Left-aligned %-20.3f rounded pi\n", pi);

    return 0;
}

