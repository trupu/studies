#include <stdio.h>
#include <stdlib.h>

int main() {
    double number, a;

    printf("Podaj liczbę: \n");
    scanf("%lf", &number);

    a = abs(number);

    printf("Wartość bezwzględna: %lf\n", a);

    return 0;
}