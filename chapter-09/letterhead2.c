#define NAME     "MEGATHINK, INC."
#define ADDRESS  "10 Megabuck Plaza"
#define PLACE    "Megapolis, MN 55414"
#define LIMIT 65

#include <stdio.h>
#include <string.h>

void space(number)
int number;
{
    int i;
    for (i=0; i<number; i++)
        putchar(' ');
}

void starbar() {
    int i;
    for (i=0; i<LIMIT; i++)
        putchar('*');
    putchar('\n');
}

int main() {
    int spaces;
    starbar();

    space(25);
    printf("%s\n", NAME);

    space((65 - strlen(ADDRESS)) / 2);
    printf("%s\n", ADDRESS);

    space((65 - strlen(PLACE)) / 2);
    printf("%s\n", PLACE);

    starbar();
}

