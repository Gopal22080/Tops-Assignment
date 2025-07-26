#include <stdio.h>

int main(void) {
    int num = 10;      // Original variable
    int *p = &num;     // Pointer p holds the address of num

    printf("Before change:\n");
    printf("  num = %d, *p = %d\n", num, *p);

    *p = 42;           // Use pointer to modify 'num'

    printf("After change via pointer:\n");
    printf("  num = %d, *p = %d\n", num, *p);

    return 0;
}

