#include <stdio.h>

char printer(char *value) {
    printf("%s\n", value);
}

int main() {

    char value[11] = "Hello World";

    printer(value);

    return 0;
}