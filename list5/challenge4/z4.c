#include <stdio.h>

int findMin(int *tab, int size) {
    int min;
    min = tab[0];
    for(int i=0; i<size; i++) {
        printf("tab: %d", tab[i]);
        if (tab[i] < min) min = tab[i];
    }
    return min;
}

int findMax(int *tab, int size) {
    int max;
    max = tab[0];
    for(int i=0; i<size; i++) {
        if (tab[i] > max) max = tab[i];
    }
    return max;
}

int main() {

    const int size = 5;
    int tab[size];
    int min, max;

    for (int i=0; i<size; i++) {
        printf("Podaj liczbę: ");
        scanf("%d", &tab[i]);
    }

    min = findMin(&tab, size);
    max = findMax(&tab, size);

    printf("Wartość minimalna: %d,\nWartość maksymalna: %d\n", min, max);

    return 0;
}