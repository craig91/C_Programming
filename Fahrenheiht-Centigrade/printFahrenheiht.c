#include <stdio.h>

/* print Fahrenheiht - Celcius table for f = 0, 20, ..., 300 */

int main() {
 int lower, upper, step;
 float fahr, celcius;

 lower = 0; /* Lower limit of temperature table */ 
 upper = 300; /* upper limit */
 step = 20; /* step size */

 fahr = lower;
 while (fahr <= upper) {
    celcius = (5.0/9.0) * (fahr-32.0);
    printf("%4.0f Of %6.1f\n", fahr, celcius);
    fahr = fahr + step;
   }
}
