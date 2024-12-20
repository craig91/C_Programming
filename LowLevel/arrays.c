#include <stdio.h>

#define MAX_IDS 32

int main() {
    // int ids[MAX_IDS]; // create array of 32 elements of int size (4 bytes)
    int ids[MAX_IDS] = {1,2,3};
    printf("%d\n", ids[0]);

    ids[3] = 0x41;
    printf("%d\n", ids[3]);

}