#include <stdio.h>
#include <stdlib.h>

int main() {
    int c;
    while ((c = getc(stdin)) != EOF)
        putc(c, stdout);

    exit(0);
}
