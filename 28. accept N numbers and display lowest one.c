//C program to accept N numbers and display lowest one

#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];

    printf("Enter the list of numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int min = numbers[0];

    for (int i = 1; i < n; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    printf("The lowest number is: %d\n", min);

    return 0;
}
