#include <stdio.h>
main() {
    int i;

    for (i = 1; i <= 5; i++) {
        if (i == 5) {
            break;  
        }
        printf("%d ", i);
    }
    printf("\n\n");

    for (i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;  
        }
        printf("%d ", i);
    }
    printf("\n");

}
