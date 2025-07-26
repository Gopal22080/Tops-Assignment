#include <stdio.h>

int main() {
    // Part 1: One-dimensional array
    int i, arr[5];
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nYou entered: ");
    for (int i = 0; i < 5; i++) {
        printu f("%d ", arr[i]);
    }
    printf("\n\n");

    // Part 2: Two-dimensional array (3x3 matrix)
    int matrix[3][3];
    int sum = 0;
    printf("Enter elements for a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("\nThe 3x3 matrix is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of all matrix elements = %d\n", sum);
    
}

