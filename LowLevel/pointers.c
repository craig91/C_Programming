#include <stdio.h>
#include <stdbool.h>

struct employee_t {
    int id;
    int income;
    bool staff;

};

void initialize_employee(struct employee_t *e) {
    e->id = 0;
    e->income = 0;
    e->staff = false;
    return;
}
 
int main() {
    // int x = 3; // compiler makes room on the stack (a memory location in the program you put things that you are using at runtime). 
    // int *pX = &x;

    // printf("%d\n", *pX); // * --> dereference (get the value of the thing the pointer is pointing to (in this case its x)
    // printf("%p\n", pX); // return the memory address of x which the pointer pX is holding
    struct employee_t Ralph;

    initialize_employee(&Ralph);
    printf("%d\n", Ralph.income);


}