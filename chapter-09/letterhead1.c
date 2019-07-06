#define NAME     "MEGATHINK, INC."
#define ADDRESS  "10 Megabuck Plaza"
#define PLACE    "Megapolis, MN 55414"
#define LIMIT 65

#include <stdio.h>

void starbar() {
    int i;
    for (i=0; i<LIMIT; i++)
        putchar('*');
    putchar('\n');
}

int main() {
    starbar();
    printf("%s\n", NAME);
    printf("%s\n", ADDRESS);
    printf("%s\n", PLACE);
    starbar();
}

