#include <stdio.h>

int min(int *tab, int size) {
    int tmp = tab[0];

    for (int j = 1; j < size; j++) {
        if (tab[j] < tmp) tmp = tab[j];
    }
    return tmp;
}

int main() {

    int tab[5];
    int i = 0;
    int result;


    while (i < 5) {
        printf("Podaj liczbę: \n");
        scanf("%d", &tab[i]);
        i++;
    }

    int size = (sizeof(tab)/sizeof(tab[0]));

    result = min(tab, size);

    printf("Minimum: %d\n", result);

    return 0;
}