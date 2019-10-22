#include <stdio.h>

int main() {
    char c;

    printf("Wprowadź znak: ['.' - wyłącz]\n");

    while (c!='.') {
        c = getchar();
        if ((int)c == 10) continue;
        printf("Wprowadzony znak to: ");
        putchar(c);
        printf("\n");
    }
}