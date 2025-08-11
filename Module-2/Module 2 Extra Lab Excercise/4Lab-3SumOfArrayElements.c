#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements (N): ");
    scanf("%d", &n);

    int arr[n]; 
    int sum = 0;

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }


    float average = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

}

