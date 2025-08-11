#include <stdio.h>
// Iterative method
int fibonacci_iterative(int n) {
    int a = 0, b = 1, c, i;
    if (n == 0) return a;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
// Recursive method
int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter a term (N): ");
    scanf("%d", &n);

    printf("Nth Fibonacci (Iterative): %d\n", fibonacci_iterative(n));
    printf("Nth Fibonacci (Recursive): %d\n", fibonacci(n));
}

