#include <stdio.h>

double findMax(double *tab, int size) {
    if (!tab[0]) return 0;
    double max;
    max = tab[0];
    
    for (int i=1; i<size; i++) {
        if (tab[i]) {
            if (tab[i] > max) max = tab[i];
        }
    }

    return max;
}

int main() {

    double tab[3], result;
    int size;

    printf("Insert 3 numbers[a b c]: ");
    scanf("%lf %lf %lf", &tab[0], &tab[1], &tab[2]);

    size = sizeof(tab)/sizeof(tab[0]);



    result = findMax(tab, size);

    printf("Max: %.2lf\n", result);

    return 0;
}