#include <stdio.h>

int main() {
    int c;

    while((c = getchar()) != EOF)
        putchar(c);
}

// In C, any assignment can be used as an expression.
// c = getchar() while part of a while loop is an example of this.


// The program gets a character.
// The character is assigned to c --> c = getchar();
// Then it is tested to see if the character is the EOF(signal) --> while((c = getchar()) != EOF)
// If it isn't, the body of the whilel loop is executed, printing the character.
// Then the while repeats until main() is terminated.