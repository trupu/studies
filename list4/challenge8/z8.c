#include <stdio.h>
#include <math.h>

int changer(int *tab, int size) {
    for (int i = 0; i<size; i++) {
        tab[i] = 1;
    }
    return tab;
}

int main() {

    int tab[10] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2};

    int size, result;

    size = sizeof(tab)/sizeof(tab[0]);

    result = changer(tab, size);

    for (int i=0; i<size; i++) {
        printf("Value[%d]: %d\n", i, tab[i]);
    }

    return 0;
}