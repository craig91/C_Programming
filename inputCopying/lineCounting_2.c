// #include <stdio.h>

// int main(void) {
//     int c, nl, tb, bl;

//     nl = 0;
//     tb = 0;
//     bl = 0;

//     printf("Type in some characters then press ctrl + D to invoke EOF");

//     while((c = getchar()) != EOF)
//         if(c == '\n' || c == '\t' || c == ' ')
//             ++nl;
//             ++tb;
//             ++bl;
//             printf("Count of blanks is %d, count of tabs is %d, count of newlines is %d.\n", bl, tb, nl);


//         return 0;
// }

#include <stdio.h>

int main(void)
{
    int c, bl, tb, nl;
    bl = 0;
    tb = 0;
    nl = 0;

    printf("Type in some characters then press ctrl + D to invoke EOF\n");
    while ((c = getchar()) != EOF)
        if (c == ' ')
            ++bl;
        else if (c == '\t')
            ++tb;
        else if (c == '\n')
            ++nl;

    printf("Count of blanks is %d, count of tabs is %d, count of newlines is %d.\n", bl, tb, nl);

    return 0;
}