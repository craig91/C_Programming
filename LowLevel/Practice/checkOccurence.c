#include <stdio.h>

int main() {
    int array[] = {1,2,3,2,5,2,7,2,9,2};
    int elements = (sizeof(array) / sizeof(array[0]));

    int input;
    printf("Enter a number to count: ");
    scanf("%d", &input);

    int count = 0;

    for (int i = 0; i < elements; i++) {
        if (array[i] == input) {
            count++;
        }
    }
    printf("The number %d appears %d times in the array\n", input, count);
    return 0;
}