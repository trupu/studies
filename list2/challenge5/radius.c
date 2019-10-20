#include <stdio.h>

int main() {

    double radius;
    const double PI = 3.14159;
    double field, circuit;
    double fp, cp;

    printf("Podaj promień koła: \n");
    scanf("%lf", &radius);

    field = radius*radius*PI;
    circuit = radius*2*PI;
    fp = radius*radius;
    cp = radius*2;

    printf("Pole: %.0lfPI ~ %.2lf, Obwód: %.0lfPI ~ %.2lf\n", fp, field, cp, circuit);

    return 0;
}