#include <stdio.h>

int main() {
    int temp;
    printf("What temprature is it? ");
    scanf("%d", &temp);

    if (temp >= 70) {
        printf("Dang bro, its' hot\n");
    } else if (temp >= 30 && temp < 70) {
        printf("Dang bro, its mild\n");
    } else {
        printf("Dang bro, it's cold\n");
    }

    return 0;
}