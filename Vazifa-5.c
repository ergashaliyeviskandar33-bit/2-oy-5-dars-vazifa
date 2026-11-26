#include <stdio.h>

int main() {
    int nums[4][4];

    printf("4x4 massiv elementlarini kiriting:\n");
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &nums[i][j]);

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (nums[i][j] == 0)
                nums[i][j] = 1;

    printf("\nYangi massiv:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            printf("%d ", nums[i][j]);
        printf("\n");
    }

    return 0;
}