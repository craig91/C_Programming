#include <stdio.h>
#include <stdbool.h>

#define MAX_EMPLOYEES 1000

__attribute__((__packed__)) struct employee_t {
    int id;//4
    char firstname[64];
    char lastname[64];
    float income; // 4
    bool ismanager; //1
};

// __attribute__((__packed__)) makes the code more interoperable between different systems. Use this to prevent additional
// optimization between fields (member of the struct)
// When we have a structure,
// I am allocating enough memory for all of the types that are in it.
// you would think, the size of the struct is the sum of all of the members of the struct (in bytes.)
// this is not 100% true and it depends on the system you are compiling this code on, because additional "padding characters"
// could be added under the hood and between each of the memebers. This could be problematic if you need the application to communicate
// with the same application on another machine. 

int main() {   
    struct employee_t employees[MAX_EMPLOYEES];
    printf("Size of employee: %d\n", sizeof(struct employee_t) ); // when not optimized, will return 140 bytes


}