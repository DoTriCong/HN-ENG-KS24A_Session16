#include <stdio.h>

void printArray(int *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: %d\n", i, *(a + i));
    }
}

int main() {
    int arr[] = {3, 5, 7, 9, 11};
    int number = sizeof(arr) / sizeof(arr[0]);

    printf("Cac phan tu trong mang:\n");
    printArray(arr, number);

    return 0;
}

