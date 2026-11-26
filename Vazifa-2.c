#include <stdio.h>

int main() {
    int a[4][3] = {
        {12, 45,  7},
        {30,  8, 21},
        { 5, 33, 19},
        {27, 14, 40}
    };

    printf("Massiv:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    printf("\nHar bir ustundagi eng kichik son:\n");
    for (int j = 0; j < 3; j++) {
        int min = a[0][j];
        for (int i = 1; i < 4; i++)
            if (a[i][j] < min)
                min = a[i][j];
        printf("%d-ustun: %d\n", j + 1, min);
    }

    return 0;
}