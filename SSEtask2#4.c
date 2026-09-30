#include <stdio.h>

int linearSearch(int arr[], int len, int value) {

    for (int i = 0; i < len; i++) {
        if (arr[i] == value) {
            return i;   // return index if found
        }
    }

    return -1;  // return -1 if not found
}

int main() {

    int arr[10] = {10, 15, 5, 50, 65, 84, 97, 43, 88, 34};
    int len = sizeof(arr) / sizeof(arr[0]);
    int value = 50;

    int result = linearSearch(arr, len, value);

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    }
    else {
        printf("Element not found\n");
    }

    return 0;
}