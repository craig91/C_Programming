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
    int x = 3; // compiler makes room on the stack (a memory location in the program you put things that you are using at runtime). 
    int *pX = &x;

    // printf("The pointer points to the value of x: %d\n", *pX); // * --> dereference (get the value of the thing the pointer is pointing to (in this case its x)
    // printf("The pointer returns the memory address of x: %p\n", pX); // return the memory address of x which the pointer pX is holding
    struct employee_t Ralph;

    initialize_employee(&Ralph);
    // printf("%d\n", Ralph.income);

   // int *p; // this *p is a pointer variable that is capable of pointing to objects of type int.
    // a pointer can point to an area of memory that doesn't belong to a variable as well.
    // int *q; 
    double *t; // points only to doubles
    char *r; // points only to characters

    // int i = 90, *g;
    // g = &i;

    // printf("Display the value if i: %d\n", i);
    // printf("Display the memory address of i: %p\n", &i);
    // printf("Display the value of the pointer *g which points to the value of i: %d\n", *g);

    int i, j, *p, *q;
    p = &i;
    q = p;
    printf("This is q: %p\n", q);
    printf("This is p: %p\n", p);
    printf("Value of i: %p\n", i);
    
    *p = 1;
    printf("Value of i (*p was modified): %d\n", i);
    *q = 2;
    printf("Value of i (*q was modified): %d\n", i);

}