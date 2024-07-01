#include <stdio.h>
#include <limits.h>

int main() {
    printf("short int... \tsize: %lu bytes \t", sizeof(short int));
    printf("%d to %d \n", SHRT_MAX, SHRT_MIN);

    printf("long int... \tsize: %lu bytes \t", sizeof(long int));
    printf("%ld to %ld \n", LONG_MAX, LONG_MIN);

    
    printf("char... \tsize: %lu byte \n", sizeof(char));
    printf("float... \tsize: %lu bytes \n", sizeof(float));
    printf("double... \tsize: %lu bytes \n", sizeof(double));

    short int num1 = 3;
    long int num2 = 3;
    printf("num1: %d\n", num1);
    printf("num2: %lu\n", num2);

    printf("Size in byte(s): %lu\n", sizeof(num1));
    printf("Size in byte(s): %lu", sizeof(num2));
    return 0;
}