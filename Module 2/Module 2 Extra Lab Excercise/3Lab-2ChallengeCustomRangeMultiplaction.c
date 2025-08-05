// Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N).
#include <stdio.h>

int main() {
    int num, start, end, i;
    printf("Enter number: ");
    scanf("%d", &num);
    
    printf("Enter start Number: ");
    scanf("%d", &start);
    
    printf("Enter the End Number: ");
    scanf("%d",&end);

    for (i = start; i <= end; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

}                                    

