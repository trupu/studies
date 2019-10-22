#include <stdio.h>

int main() {

    long number;

    printf("Insert a number: ");
    scanf("%ld", &number);

    if (number%2 == 0)
        printf("Given number is even!\n");
    else
        printf("Given number is odd!\n");

    return 0;
}