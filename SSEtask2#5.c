#include <stdio.h>

int binarySearch(int arr[], int len, int value) {

    int left = 0;
    int right = len - 1;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (arr[mid] == value)
            return mid;

        if (value < arr[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }

    return -1;
}

int main() {

    int arr[8] = {3, 11, 24, 38, 52, 67, 81, 95};
    int len = sizeof(arr) / sizeof(arr[0]);
    int value = 67;

    int result = binarySearch(arr, len, value);

    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}