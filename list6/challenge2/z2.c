#include <stdio.h>

int displayFibonacci(int n, long long a, long long b, int step) {
    if (step > n) {
        printf("Wyraz %lld ciągu Fibonacciego: %lld", n, b);
        return 0;
    }
    int result = a+b;
    step++;
    displayFibonacci(n, b, result, step);
}

int main() {
    int n;

    printf("Który wyraz ciągu Fibonacciego chcesz wyświetlić: ");
    scanf("%d", &n);

    if (n > 1) {
        displayFibonacci(n, 0, 1, 2);
    } else {
        printf("Następnym razem nie trolluj! :D");
    }

    printf("\n");

    return 0;
}