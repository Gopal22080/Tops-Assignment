#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char *filename = "myfile.txt";
    const char *text = "Hello, this is a test string!\n";

    // 1. Open (or create) the file for writing ("w" mode)
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("Error opening file for writing");
        return EXIT_FAILURE;
    }

    // 2. Write the string into the file
    fprintf(fp, "%s", text);

    // 3. Close the file
    fclose(fp);

    // 4. Re-open the file in read mode
    fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file for reading");
        return EXIT_FAILURE;
    }

    // 5. Read and display its contents line by line
    char buffer[256];
    printf("Contents of '%s':\n", filename);
    while (fgets(buffer, sizeof(buffer), fp)) {
        printf("%s", buffer);
    }

    // 6. Close the file again
    fclose(fp);

    return EXIT_SUCCESS;
}

