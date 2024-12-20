#include <stdio.h>

int main() {
    int ele[] = {10,20,30,40,50};
    int parse = (sizeof(ele) / sizeof(ele[0]));
    for (int i = 0; i < parse; i++) {
        printf("Element at index: %i\n", ele[i]);
    }
}