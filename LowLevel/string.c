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
        printf("Byte %zu: %c (0x%02)\n", i, ((unsigned char *)mystr)[i], ((unsigned char *)mystr)[i]);
    }
    return 0;
}