#include <stdio.h>

int main() {
    int a[3][4];

    printf("3x4 massiv elementlarini kiriting:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &a[i][j]);

    printf("\nHar bir qatordagi musbat sonlar soni:\n");
    for (int i = 0; i < 3; i++) {
        int count = 0;
        for (int j = 0; j < 4; j++)
            if (a[i][j] > 0)
                count++;
        printf("%d-qator: %d ta\n", i + 1, count);
    }

    return 0;
}