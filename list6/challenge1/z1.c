#include <stdio.h>

int displayNumbers(int n) {
    if (n<0) return 0;
    printf("%d ", n);
    displayNumbers(--n);
}

int main() {

    int n;

    printf("Podaj liczbę początkową: ");
    scanf("%d", &n);

    displayNumbers(n);

    printf("\n");

    return 0;
}