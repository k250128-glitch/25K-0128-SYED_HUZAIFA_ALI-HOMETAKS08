#include <stdio.h>

int main() {
    int image[4][4] = {
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 0, 1, 1}
    };
    int inverted[4][4];
    int whiteCount = 0;

    printf("Original\t\tInverted\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", image[i][j]);
            inverted[i][j] = 1 - image[i][j];
            if (image[i][j] == 1) whiteCount++;
        }

        printf("\t\t");
        for (int j = 0; j < 4; j++) {
            printf("%d ", inverted[i][j]);
        }
        printf("\n");
    }

    printf("\nTotal white pixels: %d\n", whiteCount);

    return 0;
}
