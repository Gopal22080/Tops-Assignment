#include <stdio.h>
int main() {
	int i;
    char str[100];
    int v=0, c=0, d=0, s=0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);  

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
            v++;
        }
        else if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) {
            c++;
        }
        else if (ch>='0' && ch<='9') {
            d++;
        }
        else {
            s++;
        }
    }
    printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", c);
    printf("Digits: %d\n", d);
    printf("Special Characters: %d\n", s);
}

