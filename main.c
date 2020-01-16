#include <stdio.h>

int main() {

    struct Student {
        char name[10];
        int age;
        char gender;
    };

    struct Student s1;

    strcpy(s1.name, "Drupal");
    s1.age = 10;
    s1.gender = 'M';

    printf("Name: %s, Age: %d, Gender: %c\n", s1.name, s1.age, s1.gender);

    return 0;
}