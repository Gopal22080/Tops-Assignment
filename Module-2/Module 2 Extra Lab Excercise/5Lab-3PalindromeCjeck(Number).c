#include <stdio.h>
int main() {
    int num, rev = 0, rem, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    if (num == rev)
        printf("%d is a Palindrome.\n", num);
    else
        printf("%d is not a Palindrome.\n", num);
}

