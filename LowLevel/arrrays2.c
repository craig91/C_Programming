#include <stdio.h>

#define N 10

int main() {
    int a[10];

    int b[N];

    a[0] = 1;
    printf("%d\n", a[5]);
    // ++a[i];

    for (int i = 0; i < N; i++) {
        // a[i] = 0;
        // printf("%d\n", a[i]);
        scanf("%d", &a[i]);
    }

}