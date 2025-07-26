#include <stdio.h>

// 1. Function declaration (tells the compiler what's coming)
void swap(int *a, int *b);

int main() {
    int x, y;
    printf("Enter two integers (x y): ");
    scanf("%d %d", &x, &y);

    printf("Before swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);  // 3. Call the function, passing addresses

    printf("After swap:  x = %d, y = %d\n", x, y);
    return 0;
}

// 2. Function definition
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

