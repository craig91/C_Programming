#include <stdio.h>

int main() {
 int c, nl, tab, blank;

 nl = 0;
 tab = 0;
 blank = 0;
 while((c = getchar()) != EOF) {
    if(c == '\n') {
        ++nl;
    } else if( c == '\t') {
        ++tab;
    } else if( c == ' ') {
        ++blank;
    }
    printf(" New Line %d Tab %d Blank %d\n", nl, tab, blank);
 }
 return 0;
}