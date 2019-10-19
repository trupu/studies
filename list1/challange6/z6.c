#include <stdio.h>

int checkAge(int a) {
    if (a >= 18) return 1;
    return 0;
}

int main() {

    int age;
    printf("Ile masz lat: ");
    scanf("%d", &age);

    if(checkAge(age)) {
        printf("Jesteś pełnoletni! \n");
    } else {
        printf("Nie jesteś pełnoletni! \n");
    }

    return 0;
}