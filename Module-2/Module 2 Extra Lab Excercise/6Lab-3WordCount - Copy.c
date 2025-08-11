#include <stdio.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, wordLen = 0, wordCount = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            if (wordLen > 0) {
                word[j] = '\0';
                wordCount++;
                if (wordLen > maxLen) {
                    maxLen = wordLen;
                    strcpy(longest, word);
                }
                j = 0;
                wordLen = 0;
            }
            if (str[i] == '\0') break;
        } else {
            word[j++] = str[i];
            wordLen++;
        }
        i++;
    }

    printf("Total words: %d\n", wordCount);
    printf("Longest word: %s\n", longest);
    
}

