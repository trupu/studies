#include <stdio.h>

int main() {
    int fahr, celsius;
    #define LOWER 0;
    const int UPPER = 300;
    #define STEP 20;
    fahr = LOWER;
    while (fahr <= UPPER) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3d\t%6d\n", fahr, celsius);
        fahr = fahr + STEP;
    }
    return 0;
}