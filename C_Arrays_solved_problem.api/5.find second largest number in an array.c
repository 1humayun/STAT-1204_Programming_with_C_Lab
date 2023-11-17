#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int firstMax, secondMax;

    if (n < 2) {
        printf("Array should have at least two elements.\n");
        return 0;
    }

    firstMax = secondMax = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];
        } else if (arr[i] > secondMax && arr[i] != firstMax) {
            secondMax = arr[i];
        }
    }

    printf("The second largest number in the array is: %d\n", secondMax);

    return 0;
}
