#include <stdio.h>
#include <stdlib.h>

const char pass[3] = "dru";

isValid(char *p){
    int size = sizeof(pass)/sizeof(pass[0]);

    for (int i = 0; i < size; i++) {
        if (p[i] == pass[i]) continue;
        return 0;
    }
    return 1;
}

int main() {

    char *password = malloc( sizeof(char) * 3);
    
    printf("Hasło: ");
    scanf("%s", password);

    if (isValid(password)) {
        printf("Hasło prawidłowe!\n");
    } else {
        printf("Hasło nieprawidłowe!\n");
    }

    return 0;
}