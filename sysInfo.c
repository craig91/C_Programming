#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main() {

    char hostname[256];
    gethostname(hostname, sizeof(hostname));
    printf("Hostname: %s\n", hostname);
    int id = getuid();
    printf("UID: %i\n", id);
    return 0;
}