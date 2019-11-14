#include <stdio.h>

void printName(char *name) {
    printf("Imie: %s\n", name);
}

int main() {

    char name[20];

    printf("Podaj imie: ");
    scanf("%s", &name);

    printName(name);

    return 0;
}