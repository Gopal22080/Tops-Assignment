#include <stdio.h>

int factorial(int n) {
    int fact = 1, i;
    for(i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0)
        printf("Invalid! Factorial of negative number doesn't exist.\n");
    else
        printf("Factorial of %d = %d\n", num, factorial(num));

    return 0;
}

