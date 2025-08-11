#include <stdio.h>
int i;
void reverse(char str[]) {
    int len = 0;
    while (str[len] != '\0')
	 len++;  

    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Reversed string: ");
    reverse(str);
}

