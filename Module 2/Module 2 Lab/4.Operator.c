#include <stdio.h>
int main(void) {
    int a, b;
    // 1. Get input from the user
    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);
    // 2. Arithmetic operations
    printf("\n-- Arithmetic Operations --\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    if (b != 0)
        printf("a / b = %d\n", a / b);
    else
        printf("a / b = undefined (division by zero)\n");
    printf("a %% b = %d\n", b != 0 ? a % b : 0);

    // 3. Relational operations 
    printf("\n-- Relational Operations --\n");
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a >  b : %d\n", a > b);
    printf("a <  b : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);

    // 4. Logical operations
    printf("\n-- Logical Operations --\n");
    printf("a && b : %d\n", a && b);
    printf("a || b : %d\n", a || b);
    printf("!a     : %d\n", !a);
    printf("!b     : %d\n", !b);
}

