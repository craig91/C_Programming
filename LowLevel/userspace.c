#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void handle_sigsegv(int sig) {
    printf("Segmentation fault occurred! Accessing restricted memory.\n");
    exit(1);
}

int main() {
    signal(SIGSEGV, handle_sigsegv);

    printf("Exploring memory...\n");


    int valid_var = 42;
    printf("Address of valid_var: %p\n", (void *)&valid_var);
    printf("Value at %d\n", (void *)&valid_var, valid_var);

    printf("\nAttempting to access restricted memory...\n");
    int *restricted = (int *)0xffff000000000000;
    printf("Value at %p: %d\n", (void *)restricted, *restricted);

    return 0;
}