#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define LIMIT 100

int isValidNum(const char *input) {
    for (int i = 0; input[i] != '\0'; i++) {
        if (!isdigit(input[i])) {
            return 0;
        }
    }
    return 1;
}



void guessing_game() {
    char input[100];
    srand(time(NULL));
    int val = rand() % (LIMIT + 1);

    while(1){
        printf("Guess a number (0 to %d): ", LIMIT);
        scanf("%s", input);

        if(!isValidNum(input)) {
            printf("This is not a valid number! Exiting...\n");
            break;
        }

        char *endptr;
        long userNum = strtol(input, &endptr, 10);
        if (*endptr != '\0') {
            printf("This is not a valid number! Exiting...\n");
            break;
        }
        
        if(userNum == val) {
                printf("You guessed right! The number was %d.\n", val);
                break;
            } else if (userNum > val) {
                printf("Too High!\n");
            } else {
                printf("Too Low!\n");
            }
    }
}
    

int main() {
    guessing_game();
	return 0;
}

