#include <stdio.h>

int main() {

    int radius;
    double field, miniField;
    const double PI = 3.14;

    printf("Podaj długość promienia: ");
    scanf("%d", &radius);
    field = (radius*radius*PI);
    miniField = (radius*radius);
    printf("Pole koła: %.2f \nczyli: %.0fPI \n", field, miniField);

    return 0;
}