#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size / 2; i++) {
            int j = size - i - 1;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
    }
    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}