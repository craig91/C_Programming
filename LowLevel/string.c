#include <stdio.h>
#include <string.h>

#define MAX_IDS 32

int main() {
    int ids[MAX_IDS] = {1,2,3,42,99};



    char mystr[] = {'h', 'e', 'l' ,'l', 'o'};
    int size2 = sizeof(mystr);
    printf("%i\n", size2);
    printf("Printing mystr (not null-terminated):\n");
    printf("%s\n", mystr);

    printf("Memory content around mystr (potential leakage):\n");
    for (size_t i = 0; i < sizeof(mystr) + 10; i++) {
        printf("Byte %zu: %c (0x%02x)\n", i, ((unsigned char *)mystr)[i], ((unsigned char *)mystr)[i]);
    }
    return 0;
}

// In C, strings are essentially arrays of characters terminated by a null character (`\0` or 0).
    // The null character signals the end of the string, so functions like `printf` know where to stop.
    // Without this null terminator, the program will continue reading adjacent memory until it encounters
    // a null character or causes a segmentation fault. This behavior can lead to memory disclosure,
    // unintentionally exposing sensitive information stored on the stack or heap.
    //
    // For example, if this character array lacks a null terminator:
    // char mystr[] = {'h', 'e', 'l', 'l', 'o'};
    // The program will continue printing data beyond the intended string, potentially leaking
    // information about the program's memory layout, security mechanisms, or sensitive data.
    //
    // Always ensure strings in C are null-terminated. When using double quotes (e.g., "hello"),
    // the compiler automatically adds the null terminator, but manually defined character arrays
    // require explicit inclusion of `0` or `\0` at the end.