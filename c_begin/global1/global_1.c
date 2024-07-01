#include <stdio.h>

static int sum = 100;

int main() {
    extern int sum;
    extern int num;
    
    printf("Sum is %d\n", sum);
    printf("Num is %d\n", num);
    return 0;
}