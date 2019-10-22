#include <stdio.h>
#include <math.h>

int main() {

    const double number = 2;
    double x;
    double result;

    printf("Podaj wykładnik, dla którego chciałbyś obliczyć potęgę 2: ");
    scanf("%lf", &x);

    result = pow(number, x);

    printf("Wynik: %.2lf\n", result);

    return 0;
}