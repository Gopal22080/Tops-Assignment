#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, digits = 0, specials = 0;
    printf("Enter a string: ");
    scanf(" %[^\n]", str); 

    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O'|| ch == 'U'||
                ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u')
                vowels++;
            else
                consonants++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else {
            specials++;
        }
    }

    printf("Vowels: %d\nConsonants: %d\nDigits: %d\nSpecial Characters: %d\n", vowels, consonants, digits, specials);
}
