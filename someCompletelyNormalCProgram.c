#include <stdio.h>

int main() {
    printf("Hello, World!\n");

    int *a = 11;
    *a = 7;

    printf("Successfully modified memory location 11!\n");

    return 0;
}
