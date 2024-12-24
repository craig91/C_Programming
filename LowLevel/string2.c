#include <stdio.h>

#define MAX_IDS 32

int main() {

    int number = 16;

    int ids[MAX_IDS] = {0,1,2};
    char mystr[] = {'h','e','l','l','o'};
    char *myotherstr = "hello";

    printf("%s\n", mystr);
    printf("size of number %i\n", sizeof(number));
    // strcpy(dest, src);
    // strncopy(dest, src, n);
}