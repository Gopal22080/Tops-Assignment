#include<stdio.h>
#include<string.h>
int main() {
    char s[100];
    printf("Enter a sentence: ");
    gets(s);  

    int i, j = 0, maxLength = 0, currentLength = 0, wordCount = 0;
    char longestWord[50], currentWord[50];

    for(i = 0; i <= strlen(s); i++) {
        if(s[i] != ' ' && s[i] != '\0') {
            currentWord[j++] = s[i];
            currentLength++;
        } else {
            if(currentLength > 0) { 
                currentWord[j] = '\0';  
                wordCount++;  
                if(currentLength > maxLength) {
                    maxLength = currentLength;
                    strcpy(longestWord, currentWord);
                }
                j = 0;
                currentLength = 0;
            }
        }
    }
    printf("Total Words: %d\n", wordCount);
    printf("Longest Word: %s\n", longestWord);

    return 0;
}

