#include <stdio.h>

void sum(int *x, int *y, int *result) {
    *result = *x + *y;
}

int main() {
    int a = 8, b = 12, result = 0;

    printf("Gia tri cua a: %d\n", a);
    printf("Gia tri cua b: %d\n", b);

    sum(&a, &b, &result);

    printf("Tong cua a va b: %d\n", result);

    return 0;
}

