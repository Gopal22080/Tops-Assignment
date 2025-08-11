#include <stdio.h>
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
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isStringPalindrome(str))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
}

