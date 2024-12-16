#include <stdio.h>
void arrange(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(arr + i) > *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}
void printArr(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
int main() {
    int arr[] = {5, 2, 9, 1, 6, 3};
    int numbers = sizeof(arr) / sizeof(arr[0]);
    printf("Mang truoc khi sap xep:\n");
    printArr(arr, numbers);
    arrange(arr, numbers);
    printf("Mang sau khi sap xep:\n");
    printArr(arr, numbers);

    return 0;
}

