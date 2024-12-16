#include <stdio.h>
void molecularUpdates(int *arr, int location, int value) {
    arr[location] = value;
}
void printArr(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int numbers = sizeof(arr) / sizeof(arr[0]);
    printf("Mang ban dau:\n");
    printArr(arr, numbers);
    molecularUpdates(arr, 2, 10);
    printf("Mang sau khi cap nhat:\n");
    printArr(arr, numbers);
    return 0;
}

