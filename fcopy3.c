#include <stdio.h>

int main() {
    int c;
    c = getchar() != EOF;
    printf("%d\n, %d\n", c, EOF);
    putchar(c);

    return 0;
}