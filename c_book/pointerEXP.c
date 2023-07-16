#include <stdio.h>

int main(void) {

    int myAge = 31;
    int* ptr = &myAge;

    printf("%d\n", myAge);
    printf("%p\n", &myAge);
    printf("%p\n", ptr);
}

