#include <stdio.h>

int main() {
    int a[4][4] = {
        {10, 23,  5, 17},
        {40,  8, 15, 31},
        {22, 35,  9, 60},
        { 7, 50, 12, 25}
    };
    int count = 0;

    printf("Massiv:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    printf("\n5 ga bo'linadigan sonlar:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i][j] % 5 == 0) {
                printf("%d ", a[i][j]);
                count++;
            }
        }
    }

    printf("\n\nSonlar soni: %d\n", count);

    return 0;
}