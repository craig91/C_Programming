#include <stdio.h>

/* print Fahrenheiht - Celcius table for f = 0, 20, ..., 300 */

int main() {
 int lower, upper, step; // <--- Variables must be declared with type. These variables can hold integers.
 float fahr, celcius; // <--- These can hold floating point numbers AKA decimals

 lower = 0; /* Lower limit of temperature table */ 
 upper = 300; /* upper limit */
 step = 20; /* step size */

 fahr = lower;  // <--- fahr = 0
 printf("This is the temperature meter!\n");
 while (fahr <= upper) {  // <--- While fahr(0) is lesser than or equal to upper(300)
    celcius = (5.0/9.0) * (fahr-32.0); // <--- Do this! Celcius(5.0 divided by 9.0) times fahr (minus 32.0) 
    
    printf("%5.0f Of %8.1f\n", fahr, celcius); //  <--- The %5.0 is the field width. This specifies the space the printed 
                                                     // float number will occupy.
    fahr = fahr + step; // <--- Then this!
   }
}
