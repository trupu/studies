#include <stdio.h>

int displayBinary(int n, int *tab, int index) {
    if (n == 0) return 0;
    
    printf("tab[%d]: %d\n", index, tab[index]);

    if (n%2==0) {
        tab[index] = 1;
    } else {
        tab[index] = 0;
    }

    index ++;
    displayBinary(n/2, &tab, index);
}

int main() {

    int n;
    int tab[10];
    int size = sizeof(tab)/sizeof(tab[0]);

    printf("Podaj całkowitą liczbę dziesiętną: ");
    scanf("%d", &n);

    for (int i=0; i<size; i++) {
        tab[i] = 0;
    }

    displayBinary(n, &tab, 0);

    for (int i=size; i >=0; i--) {
        if (tab[i] != 0 && tab[i] != 1) break;
        printf("%d", tab[i]);
    }

    return 0;
}