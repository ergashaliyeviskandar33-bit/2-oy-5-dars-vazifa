#include <stdio.h>

int main() {
    int a[4][4];

    printf("4x4 massiv elementlarini kiriting:\n");
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &a[i][j]);

    int max = a[0][0];
    int min = a[0][0];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i][j] > max)
                max = a[i][j];
            if (a[i][j] < min)
                min = a[i][j];
        }
    }

    printf("\nEng katta son: %d\n", max);
    printf("Eng kichik son: %d\n", min);
    printf("Ayirma: %d - %d = %d\n", max, min, max - min);

    return 0;
}