#include <stdio.h>

int main() {

    int age;
    double days = 365.25;
    double hours = 24;

    double ageInDays, ageInHours;

    printf("Ile masz lat: \n");
    scanf("%d", &age);

    ageInDays = (age*days);
    ageInHours = (ageInDays*hours);

    printf("Twój wiek: %.2f dni /// %.2f godzin\n", ageInDays, ageInHours);

    return 0;
}