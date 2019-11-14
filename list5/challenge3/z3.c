#include <stdlib.h>

int main() {

    int number = 1;
    size_t size = sizeof(number);

    if (calloc(20, size)) {
        printf("It worked!\n");
    } else {
        printf("It didn`t work!\n");
    }

    return 0;
}
