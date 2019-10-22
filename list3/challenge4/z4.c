#include <stdio.h>
#include <math.h>
#include <string.h>

void changeUnit(double x) {

    char units[5] = {' ', 'k', 'm', 'g', 't'};

    double result = x;
    int steps = 0;

    int size = strlen(units);

    while (result >= 1024) {
        result = result/1024;
        steps++;
        /* in case of missing letter in array */
        if (steps >= size) {
            result = result*1024;
            steps--;
            break;
        }
    }
    
    printf("Wynik: %.2lf%c\n", result, units[steps]);
}

int main() {

    const double number = 2;
    double x;
    double result;

    printf("Podaj wykładnik, dla którego chciałbyś obliczyć potęgę 2: ");
    scanf("%lf", &x);

    result = pow(number, x);

    changeUnit(result);

    return 0;
}