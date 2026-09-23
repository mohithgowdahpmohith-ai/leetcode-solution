#include <stdio.h>

void moveZeroes(int nums[], int n) {
    int writeIndex = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[writeIndex] = nums[i];
            writeIndex++;
        }
    }

    while (writeIndex < n) {
        nums[writeIndex] = 0;
        writeIndex++;
    }
}

int main() {
    int nums[] = {0, 1, 0, 3, 12};
    int n = 5;

    moveZeroes(nums, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
