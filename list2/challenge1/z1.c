#include <stdio.h>

int main() {

    char name[20];
    char surname[20];
    int age;

    printf("Podaj imię: \n");
    scanf("%s", &name);
    printf("Podaj nazwisko: \n");
    scanf("%s", &surname);
    printf("Wiek: \n");
    scanf("%d", &age);

    printf("%s %s, Wiek: %dlat\n", name, surname, age);

    return 0;
}