#include <stdio.h>
int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0;
    int max = 0, count = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin); 

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\n') {
            word[j] = '\0';  

            if (j > 0) {
                count++;      

                if (j > max) {   
                    max = j;
                    strcpy(longest, word);
                }
            }

            j = 0;
        } else {
            word[j] = str[i]; 
            j++;
        }
        i++;
    }

    if (j > 0) {
        word[j] = '\0';
        count++;
        if (j > max) {
            strcpy(longest, word);
        }
    }
    printf("Total words: %d\n", count);
    printf("Longest word: %s\n", longest);
}

