#include <stdio.h>

int isTriangle(double a, double b, double c) {
    if ((a+b) < c || (b+c) < a || (a+c) < b) return 0;
    return 1;
}

int main() {

    double a,b,c;

    printf("Podaj 3 boki trójkąta[a b c]: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (isTriangle(a, b, c)) {
        printf("Istnieje trójkąt o podanych bokach!\n");
    } else {
        printf("Nie istnieje trójkąt o podanych bokach!\n");
    }

    return 0;
}