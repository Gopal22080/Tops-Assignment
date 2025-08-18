#include <stdio.h>
main() {
    int a, b;
    int choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("\n Largest number is: %d", a);
        choice = 2;
    } else if (b > a) {
        printf("\n Largest number is: %d", b);
        choice = 1;
    } else {
        printf("\n Both numbers are equal!");
        choice = 0;
    }
    switch (choice) {
        case 1:
            printf("\n Smallest number is: %d", a);
            break;
        case 2:
            printf("\n Smallest number is: %d", b);
            break;
    }
}
