#include <stdio.h>
#include <string.h>
void arr(char *input, char *reverse) {
    int len = strlen(input);
    for (int i = 0; i < len; i++) {
        *(reverse + i) = *(input + len - 1 - i);
    }
    *(reverse + len) = '\0';
}
int main() {
    char inputString[100], reverseString[100];
    printf("Nhap mot chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);
    size_t len = strlen(inputString);
    if (len > 0 && inputString[len - 1] == '\n') {
        inputString[len - 1] = '\0';
    }
    arr(inputString, reverseString);
    printf("Chuoi ban dau: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);
    return 0;
}

