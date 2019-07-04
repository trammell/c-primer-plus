#include <stdio.h>

int main() {
    float weight, value; 
    char beep;

    beep = '\007';
    printf("Are you worth your weight in gold?\n");
    printf("Please enter your weight in pounds, and we'll see.\n");
    scanf("%f", &weight);

    /* assume gold is $400/oz, 14.5833 converts pounds to troy ounces */
    value = 400.0 * weight * 14.5833;
    printf("%cYour weight in gold is worth $%2.2f%c.\n", beep, value, beep);
    printf("You are easily worth that! If gold prices drop, ");
    printf("eat more to maintain your value.\n");
}
