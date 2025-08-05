#include <stdio.h>

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

int main() {
    int n;
    printf("Enter a term (N): ");
    scanf("%d", &n);

    printf("Nth Fibonacci (Iterative): %d\n", fibonacci_iterative(n));
    printf("Nth Fibonacci (Recursive): %d\n", fibonacci(n));
    
}

