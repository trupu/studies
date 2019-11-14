#include <stdio.h>

struct people {
    char name[20];
    char surname[20];
    int age;
    char address[20];
};

void getPerson(struct people *p) {
    printf("Imie: %s\n", p->name);
    printf("Nazwisko: %s\n", p->surname);
    printf("Wiek: %d\n", p->age);
    printf("Adres: %s\n", p->address);
}

void setPerson(struct people *p) {
    printf("Podaj imie: \n");
    scanf("%s", p->name);
    printf("Podaj nazwisko: \n");
    scanf("%s", p->surname);
    printf("Podaj wiek: \n");
    scanf("%s", &p->age);
    printf("Podaj adres: \n");
    scanf("%s", p->address);
}

int main() {

    struct people p[5];

    setPerson(&p[0]);

    getPerson(&p[0]);

    return 0;
}