#include <stdio.h>

int pow(x) {
    return (x*x);
}

int main() {

    int x = 10;
    int result;

    result = pow(x);

    printf("%d\n", result);

    return 0;
}