#include <stdio.h>

int main() {


    FILE *fp1;
    int size = 50;
    char array[30][size];
    char str[size];
    int i = 0;
    int j = 0;

    fp1 = fopen("plik.txt", "r");

    if (!fp1) {
        printf("File could not be opened!");
        return 0;
    }

    while (feof(fp1) == 0) {
        while (fgets(array[j], size, fp1)) {
            printf("Wiersz: %d, Element: %s\n", j, array[j]);
            j++;
        }
    }

    fclose(fp1);

    return 0;
}