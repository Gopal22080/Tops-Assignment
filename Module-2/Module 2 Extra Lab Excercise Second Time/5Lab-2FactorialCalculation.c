#include <stdio.h>
// Recursive Function
int factRec(n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factRec(n - 1);
}

// Iterative Function
int factItr(n) {
    int f = 1, i;
    for(i = 1; i <= n; i++){
    	  f *= i;
	}
    return f;
}

int main() {
    int n, i;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("\nRecursive Factorial = %d", factRec(n));
    printf("\nIterative Factorial = %d\n", factItr(n));

    return 0;
}

