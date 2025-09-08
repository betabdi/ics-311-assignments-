#include <stdio.h>

int main() {
    int rows = 10;
    int i = 1;

    do {
        int spaces = rows - i;
        int stars = 2 * i - 1;

        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
        i++;
    } while (i <= rows);

    return 0;
}