#include <stdio.h>

#define MAX_BUFFER_SIZE 1024

int main() {
  int arr[MAX_BUFFER_SIZE];
  int arrSize = sizeof(arr);
  printf("The size of the array is: %d\n", arrSize);
  return 0;
}

