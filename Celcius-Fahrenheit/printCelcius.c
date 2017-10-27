#include <stdio.h>

int main() {
    int lower, upper, step;
    float celcius, fahr;

    lower = 0;
    upper = 300;
    step = 20;

    celcius = lower;
    printf("This is celcius to fahrenheit!\n");
    while(celcius <= upper) {
        celcius = (5.0/9.0) + (fahr - 32.0);

        printf("%8.1f Of %5.0f\n ", celcius, fahr);

        fahr = fahr + step;
    }
}