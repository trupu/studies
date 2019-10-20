#include <stdio.h>
#include <math.h>

int main() {

    int a, b, c;
    double field, x;
    double circuit;


    printf("Podaj długości boków trójkąta [a b c]: ");
    scanf("%d %d %d", &a, &b, &c);

    circuit = (a+b+c)/2;
    x = circuit*(circuit-a)*(circuit-b)*(circuit-c);

    if (x==0) {
        printf("Podany przez Ciebie 'trójkąt' nie jest trójkątem! \n");
        return 0;
    }

    field = sqrt(x);

    printf("Pole trójkąta: %.2lf \n", field);

    return 0;
}