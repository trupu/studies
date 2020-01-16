#include <stdio.h>
#include <string.h>

int main() {

    char a[] = "Drupal";
    char b[5] = "koza";

    printf("Przed: a: %s, b: %s\n", a , b);

    strcpy(a, b);

    printf("Po: a: %s, b: %s\n", a , b);

    return 0;
}