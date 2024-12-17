#include <stdio.h>

void erase(int *arr, int *n, int location) {
    for (int i = location; i < *n - 1; i++) {
        *(arr + i) = *(arr + i + 1);
    }
    (*n)--;
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
    erase(arr, &num, 2);
    printf("Mang sau khi xoa:\n");
    printArr(arr, num);
    return 0;
}

