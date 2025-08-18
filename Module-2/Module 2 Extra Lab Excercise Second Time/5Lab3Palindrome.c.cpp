#include <stdio.h>
// Function to check Palindrome Number
int isNumberPalindrome(int num) {
    int rev = 0, rem, temp = num;
    while (temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    return (num == rev);
}
// Function to check Palindrome String
int isStringPalindrome(char str[]) {
    int i = 0, j;
    for (j = 0; str[j] != '\0'; j++);
    j--;
    while (i < j) {
        if (str[i] != str[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}
int main() {
    int num;
    char str[100];

  // Check Number
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isNumberPalindrome(num))
        printf("%d is a Palindrome Number.\n", num);
    else
        printf("%d is NOT a Palindrome Number.\n", num);

    // Check String
    printf("\nEnter a string: ");
    scanf("%s", str);
    if (isStringPalindrome(str))
        printf("The string \"%s\" is a Palindrome.\n", str);
    else
        printf("The string \"%s\" is NOT a Palindrome.\n", str);

    return 0;
}

