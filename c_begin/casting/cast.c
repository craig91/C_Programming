#include <stdio.h>

int main() {
    float num = 5.75;
    char Letter = 'A';
    int zee = 90;
    int x = 7, y = 5;
    double decimal = 0.12345678;

    printf("Float cast to int: %d\n", (int)num);
    printf("Char case to int: %d\n", (int)Letter);
    printf("Int cast to char: %d\n", (char)zee);
    printf("Float arithmetic: %f\n", (float)x / (float)y);
    printf("Double cast to float: %f\n", (float)decimal);

}