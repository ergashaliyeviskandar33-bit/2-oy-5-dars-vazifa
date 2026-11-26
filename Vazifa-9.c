#include <stdio.h>

int main() {
    int a[4][4];
    int x, count = 0;

    printf("4x4 massiv elementlarini kiriting:\n");
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &a[i][j]);

    printf("\nQidirilayotgan sonni kiriting: ");
    scanf("%d", &x);

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (a[i][j] == x)
                count++;

    printf("%d soni massivda %d marta uchraydi.\n", x, count);

    return 0;
}