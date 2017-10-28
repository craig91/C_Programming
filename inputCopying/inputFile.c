#include <stdio.h>

int main() {
    int c;
    c = getchar(); // contains the next value of input
    
    while (c != EOF) {
        
        putchar(c); // prints the contents of variable c to some output medium.
        
        c = getchar();
    }
}

// getchar() --> A function in the standard library that fetches
// the next input character ( input as in what you type into the terminal)
// each time it is called.

// EOF --> End of file signal.