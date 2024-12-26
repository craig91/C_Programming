#include <stdio.h>
#include <stdbool.h>

#define MAX_EMPLOYEES 1000

struct employee_t { // struct allocates enough memory to contain all of the elements in the struct.
    int id;
    char firstname[64];
    char lastname[64];
    float income;
    bool ismanager;
};

union myunion_u { // creates enough rook for the biggest element.
    int x; // --> since int is larger than char (int 4 bytes) (char 1 byte), the union will be 4 bytes wide.
    char c;
    short s;
};

int main() {
    struct employee_t employees[MAX_EMPLOYEES];
    union myunion_u u;
    u.x = 0x41424344;

    printf("%hx %hhx\n", u.s, u.c);
}