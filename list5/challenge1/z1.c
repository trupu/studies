#include <stdio.h>

void clearTable(int *tab, int sizey) {
    for (int i=0; i<sizey; i++) {
            tab[i] = 0;
    }
}

int main() {

    int tab[10][10];

    int sizex = sizeof(tab)/sizeof(tab[0]);
    int sizey = sizeof(tab[0])/sizeof(tab[0][0]);

    for (int i=0; i<sizex; i++) {
        for (int j=0; j<sizey; j++) {
            tab[i][j] = 1;
        }
    }

    for (int i=0; i<sizex; i++) {
        clearTable(tab[i], sizey);
    }

    for (int i=0; i<sizex; i++) {
        for (int j=0; j<sizey; j++) {
            printf("Element [%d][%d]: %d\n", i, j, tab[i][j]);
        }
    }

    return 0;
}