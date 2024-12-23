#include <stdio.h>
#include <stddef.h>

int main() {
    int array[5] = {1,2,3,4,5};
    size_t size = sizeof(array);

    printf("The size of the array is: %lu\n", size);
    return 0;
}