#include <stdio.h>

int checkNumber(double x, double co) {
    if (x > co) return 1;
    if (x == co) return 0;
    return -1;
}

int main() {
    const int checkIn = 10; 

    double number;

    int result;

    printf("Insert a number: ");
    scanf("%lf", &number);

    result = checkNumber(number, checkIn);

    if (result == 1) {
        printf("Your number is higher than %d!\n", checkIn);
    } else if (result == 0) {
        printf("Your number equals %d!\n", checkIn);
    } else {
        printf("Your number is lower than %d!\n", checkIn);
    }

    return 0;
}