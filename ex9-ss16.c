#include <stdio.h>

void add(int *arr, int *n, int location, int value) {
    for (int i = *n; i > location; i--) {
        *(arr + i) = *(arr + i - 1);
    }
    *(arr + location) = value;
    (*n)++;
}

void printArr(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int num = 5;

    printf("Mang ban dau:\n");
    printArr(arr, num);

    add(arr, &num, 2, 10);

    printf("Mang sau khi them:\n");
    printArr(arr, num);

    return 0;
}

