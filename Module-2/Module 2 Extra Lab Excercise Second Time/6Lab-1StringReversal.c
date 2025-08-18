#include <stdio.h>

int reverseString(char str[]) {
    int len = 0, i;
    while (str[len] != '\0') len++;

    for (i = 0; i < len / 2; i++) {
        char t = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = t;
    }
    return len;
}

int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);

    int len = reverseString(str);
    printf("Reversed: %s\nLength: %d\n", str, len);

    return 0;
}

