#include <stdio.h>

void changeNumber(double x) {
    int steps = 0;

    if (x > 10) {
        while (x > 10) {
            x = x/10;
            steps++;
        }
        printf("Notacja wykładnicza: %lf*10^%d\n", x, steps);
    } else if (x < 1) {
        while (x < 1) {
            x = x*10;
            steps++;
        }
        printf("Notacja wykładnicza: %lf*10^-%d\n", x, steps);
    } else {
        printf("Notacja wykładnicza: %lf*10^%d\n", x, steps);
    }
}

int main() {

    double number;

    printf("Podaj liczbę zmiennoprzecinkową: \n");
    scanf("%lf", &number);

    printf("Liczba: %lf \n", number);
    changeNumber(number);

    return 0;
}