//C Program to accept N numbers and display largest one

#include <stdio.h>

int main()
{
    int n;
    int numbers[n];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the list of numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int max = numbers[0];

    for (int i = 1; i < n; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    printf("The largest number is: %d\n", max);

    return 0;
}
