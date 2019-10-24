#include <stdio.h>

double sumOf(double *tab, int size) {
    double sum;

    for (int i=0; i<size; i++) {
        sum+=tab[i];
    }

    return sum;
}

int main() {

    double tab[10], result;

    int size;

    size = sizeof(tab)/sizeof(tab[0]);

    for (int i=0; i<size; i++) {
        printf("Insert a number: \n");
        scanf("%lf", &tab[i]);
    }

    result = sumOf(tab, size);

    printf("Sum of given numbers: %.2lf\n", result);

    return 0;
}