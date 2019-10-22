#include<stdio.h>
    
int main() {
    long decimal, quotient, remainder;
    int i, j = 0;
    char hexadecimal[100];

    printf("Enter decimal number: ");
    scanf("%ld", &decimal);
     
    quotient = decimal;
     
    while (quotient != 0) {
        remainder = quotient % 16;
        if (remainder < 10) 
            hexadecimal[j++] = 48 + remainder;
        else
            hexadecimal[j++] = 55 + remainder;
        quotient = quotient / 16;
    }

    printf("Equivalent (hex) value of (dec) number %ld: ", decimal);
     
    
    for (i = j; i >= 0; i--) printf("%c", hexadecimal[i]);
    printf("\n");
    return 0;
}
