#include <stdio.h>

int main() {
    int minmax[] = {7,2,19,5,11,3};
    int smallest = minmax[0];
    int largest = minmax[0];
    for (int i = 0; i < 6; i++) {
        if(minmax[i] < smallest) {
            smallest = minmax[i];
        }
        if(minmax[i] > largest) {
            largest = minmax[i];
        } 
    }
    printf("The maximum value in the array is: %i\n", largest);
    printf("The smallest value in the array is: %i\n", smallest);
    return 0;
}