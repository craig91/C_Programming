#include <stdio.h>

#define CIRCLE_AREA(r) (3.14159 * (r) * (r))

int main() {
    float radius = 5.0;
    float area = CIRCLE_AREA(radius);

    printf("The area of the circle with radius %.2f is: %.5f\n", radius, area);
    return 0;
}   