#include <stdio.h>

#define LOWER 0 // Symbolic constants -> variables that cannot be changed 
                // each occurence of LOWER will equal 0.
#define UPPER 300
#define STEP 20


int main() {
    int fahr;
    
       for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) 
    // for(fahr = 300; fahr >= 0; fahr = fahr - 20) --> Challenge print in reverse order.
        printf("%4d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
}