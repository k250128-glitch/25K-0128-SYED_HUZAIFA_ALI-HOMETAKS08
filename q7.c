#include <stdio.h>

int main() {
    int i, j, space;

    for (i = 1; i <= 5; i++) {
        // Left side: pyramid of stars
        for (space = i; space < 5; space++)
            printf(" ");
        for (j = 1; j <= (2 * i - 1); j++)
            printf("*");
        printf("   | ");

        // Middle: numbers
        for (j = 1; j <= (2 * i - 1); j++)
            printf("%d", j);
        printf("   | ");

        // Right side: letters
        for (j = 1; j <= (2 * i - 1); j++)
            printf("%c", 'A' + j - 1);

        printf("\n");
    }

    return 0;
}
