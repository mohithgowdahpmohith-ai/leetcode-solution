#include <stdio.h>

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }

    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11};
    int target = 7;
    int n = 6;

    int result = binarySearch(arr, 0, n - 1, target);
    printf("Index: %d\n", result);
    return 0;
}
