#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a;

    printf("Cach 1:\n");
    printf("Gia tri cua a: %d\n", a);
    printf("Dia chi cua a: %p\n", (void*)&a);

    printf("\nCach 2:\n");
    printf("Gia tri cua a qua con tro: %d\n", *ptr);
    printf("Dia chi cua a qua con tro: %p\n", (void*)ptr);

    return 0;
}

