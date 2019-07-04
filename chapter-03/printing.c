#include <stdio.h>
int main() {
    unsigned u = 4000000000;
    long lo = 20000000000L;
    unsigned long ulo = 2 * lo;
    printf("  u = %u and not %d\n", u, u);
    printf(" lo = %ld and not %d\n", lo, lo);
    printf("ulo = %lu and not %d\n", ulo, ulo);
}
