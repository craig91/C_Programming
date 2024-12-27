#include <stdio.h>
#include <stdbool.h>

#define MAX_EMPLOYEES 1000

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
    struct employee_t employees[MAX_EMPLOYEES];
    
    initialize_employee(&employees[0]);

}