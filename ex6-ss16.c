#include <stdio.h>

int search(int *arr, int n, int value) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6, 7};
    int numbers = sizeof(arr) / sizeof(arr[0]);
    int searchValue = 7;

    int location = search(arr, numbers, searchValue);

    if (location != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d\n", searchValue, location);
    } else {
        printf("Phan tu %d khong co trong mang\n", searchValue);
    }

    return 0;
}

