#include <stdio.h>
#include <string.h>

int main() {

    char a[10] = "Drupal";
    char b[3] = " 8"; 

    printf("Przed: a: %s, b: %s\n", a , b);

    strcat(&a, &b);

    printf("Po: a: %s, b: %s\n", a , b);

    return 0;
}
