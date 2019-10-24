#include <stdio.h>
#include <math.h>

int absoluteValue(int x) {
    x = sqrt(x*x);
    return x;
}

int main() {
    int x = -10;
    int result;

    result = absoluteValue(x);

    printf("%d\n", result);

    return 0;
}