#include <stdio.h>

int main() {

    double molecule = 0.00000000000000000000003;
    double l;
    double result;

    printf("Podaj ilość wody w litrach: \n");
    scanf("%lf", &l);

    result = l/molecule;

    printf("Ilość cząsteczek wody: %.2lf\n", result);

    return 0;
}