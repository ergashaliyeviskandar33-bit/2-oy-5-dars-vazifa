#include <stdio.h>

int main() {
    int a[3][4];

    printf("3x4 massiv elementlarini kiriting:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &a[i][j]);

    printf("\nTeskari tartibda:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 3; j >= 0; j--)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}