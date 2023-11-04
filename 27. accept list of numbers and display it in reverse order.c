
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

    printf("Numbers in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}
