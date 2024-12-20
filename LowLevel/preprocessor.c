#include <stdio.h>

#define MAX_PERSONS 1024
#define DEBUG

int main() {
    #ifdef DEBUG
    printf("WE ARE IN DEBUG MODE: %s:%d", __FILE__, __LINE__);
    #endif
    return 0;
}