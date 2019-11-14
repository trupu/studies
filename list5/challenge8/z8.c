#include <stdio.h>

double countConsumption(double kilometers, double litres) {
    double result, s;
    s = kilometers/100;
    result = litres/s;
    return result;
}

double swapConsumption(double kilometers, double litres) {
    double galons = litres*0.264172052;
    double miles = kilometers*0.621371192;
    double result,s;

    s = miles/100;
    result = galons/s;

    return result;
}

int main() {

    int kilometers, litres;
    double consumption, result;

    int x;

    printf("Wprowadź liczbę przejechanych kilometrów: ");
    scanf("%d", &kilometers);
    printf("Wprowadź liczbę spalonych litrów paliwa: ");
    scanf("%d", &litres);

    result = countConsumption(kilometers, litres);

    printf("Średnie spalanie w litrach: %.2lf[lpk]\n", result);

    printf("\nCzy chcesz zamienić spalanie w litrach/100 kilometrów na spalanie w galonach/100mil? [1 - TAK, 0 - NIE]\n");
    scanf("%d", &x);

    switch(x) {
        case 1:
            result = swapConsumption(kilometers, litres);
            printf("Średnie spalanie w galonach: %.2lf[gpm]\n", result);
            break;
        case 0:
            return 0;
            break;
        default: 
            printf("Wybrałeś złą opcję!\n");
            break;
    }

    return 0;
}