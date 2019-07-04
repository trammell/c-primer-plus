#include <stdio.h>
int main() {
    unsigned u = 40000;
    long lo = 2000000000; /* nine zeroes */
    unsigned long ulo = 2 * 2000000000;
    printf("u = %u and not %d\n", u, u);
}
