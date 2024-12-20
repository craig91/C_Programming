#include <stdio.h>

int main() {
    int array[] = {2,4,6,8,10,12,14,16,18,20};
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum = sum + array[i];
    }
    printf("The sum of the array is: %i\n", sum);
}