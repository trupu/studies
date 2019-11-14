#include <stdio.h>

double sumOf(int *tab1, int *tab2, int size1, int size2) {
    double sum;

    for (int i=0; i<size1; i++ ) {
        sum+=tab1[i];
    }

    for (int i=0; i<size2; i++ ) {
        sum+=tab2[i];
    }

    return sum;
}

int main() {

    double result;

    int tab1[3] = {1, 2, 3};
    int tab2[5] = {1, 1, 1, 1, 4};

    int size1, size2;

    size1 = sizeof(tab1)/sizeof(tab1[0]);
    size2 = sizeof(tab2)/sizeof(tab2[0]);

    result = sumOf(&tab1, &tab2, size1, size2);

    printf("Sum of each elements: %.2lf\n", result);

    return 0;
}