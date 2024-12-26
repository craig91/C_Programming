#include <stdio.h>
#include <stdbool.h>

#define MAX_IDS 32
#define MAX_EMPLOYEES 1000

struct employee_t { // the _t indicates that employee is a type
    int id;
    char firstname[64];
    char lastname[64];
    float income;
    bool ismanager;
};

int main() {
    // struct employee_t Fred;
    // Fred.income = 100.00;
    // Fred.ismanager = true;

    struct employee_t employees[MAX_EMPLOYEES];
    int i = 0;
    for (i = 0; i < MAX_EMPLOYEES; i++) {
        employees[i].income = 0;
        employees[i].ismanager = false;
    }
    employees[2].ismanager = true;
    printf("%f, %b\n", employees[99].income, employees[2].ismanager);

}