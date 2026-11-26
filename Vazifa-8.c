#include <stdio.h>

int main() {
    int a[3][3];

    printf("3x3 massiv elementlarini kiriting:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    int maxSum = 0;
    int maxRow = 0;

    printf("\nQatorlar yig'indisi:\n");
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++)
            sum += a[i][j];
        printf("%d-qator: %d\n", i + 1, sum);

        if (i == 0 || sum > maxSum) {
            maxSum = sum;
            maxRow = i + 1;
        }
    }

    printf("\nEng katta yig'indi: %d-qatorda (%d)\n", maxRow, maxSum);

    return 0;
}