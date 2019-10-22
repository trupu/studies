#include <stdio.h>

double calculate(double a, double b, char *o) {
    switch (*o) {
    case '+': 
        return (a)+(b);
        break;
    case '-':
        return (a)-(b);
        break;
    case '*':
        return (a)*(b);
        break;
    case '/':
        return (a)/(b);
    default:
        printf("You have chosen wrong operation!\n");
        return 0;
        break;
    }
}

int main() {

    double a, b, result;
    char operation[1];

    printf("Insert 2 numbers[a b]: ");
    scanf("%lf %lf", &a, &b);
    printf("Choose operation[+,-,*,/]: ");
    scanf("%s", operation);
    result = calculate(a,b,operation);

    printf("Result: %.2lf\n", result);

    return 0;
}