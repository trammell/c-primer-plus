#include <stdio.h>


void floaterror(float f) {
    float a, b;
    b = f + 1.0;
    a = b - f;
    printf("%f ==> %f\n", f, a);
}

int main() {
    floaterror(1.0);
    floaterror(1.0e5);
    floaterror(1.0e10);
    floaterror(1.0e15);
    floaterror(2.0e20);
}

