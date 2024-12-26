#include <stdio.h>

// function structure
// return_type name(list of arguments) {
//
//}

int add(int x, int y) {
    int z = x + y;
    return z;
}

// int initialize_employee_structure(Employee *e) {

// }

int main(int argc, char *argv[]) {
    int other_int = add(2,3);
    printf("%d\n", other_int);
    return 0;
}