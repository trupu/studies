#include <stdio.h>

double subtraction(double a, double b) {
    double res = a-b;
    return res;
}

int main() {

    double a, b, result;

    printf("Insert 2 numbers[a b]: ");
    scanf("%lf %lf", &a, &b);

    result = subtraction(a, b);

    printf("Result: %.2lf\n", result);

    return 0;
}