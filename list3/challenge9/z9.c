#include <stdio.h>

int calculateDays(int day, int month, int *days) {
    int res = 0;
    int i = 0;

    while (i < month-1) {
        res += days[i];
        i++;
    }
    res = res+(day-1);
    return res;
}

int main() {

    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month, day, result;

    printf("[1] - January\n[2] - February\n[3] - Marc\n[4] - April\n[5] - May\n[6] - June\n[7] - July\n[8] - August\n[9] - September\n[10] - October\n[11] - November\n[12] - Decemper\nInsert month: ");
    scanf("%d", &month);

    printf("Insert day: ");
    scanf("%d", &day);

    if (!days[month-1]) {
        printf("The doesn`t exist %d.%d in our universe! :D\n", day, month);
        return 0;
    }

    if (day > days[month-1]) {
        if (day == 29 && month == 2) {
            printf("The 29th of February isnt taken under attention in our program, however from the beggining of the year, there will have 59days elapsed :)\n");
            return 0;
        }
        printf("The doesn`t exist %d.%d in our universe! :D\n", day, month);
        return 0;
    }

    result = calculateDays(day, month, days);
    printf("Until %d.%d, %d days will have elapsed!\n", day, month, result);

    return 0;
}