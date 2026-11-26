#include <stdio.h>

int main() {
    int nums[3][4];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            printf("%d-qatorning %d-ustunidagi sonni kiriting: ", i+1, j+1);
            scanf("%d", &nums[i][j]);
        }
    }

    for (int i = 0; i < 3; i++){
        int max = nums[i][0];          
        for (int j = 1; j < 4; j++){
            if (nums[i][j] > max){
                max = nums[i][j];
            }
        }
        printf("%d-qatordagi eng katta son: %d\n", i+1, max);
    }

    return 0;
}