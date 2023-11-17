#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int main[n], copy[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &main[i]);
    }

    for (i = 0; i < n; i++) 
    {
        copy[i] = main[i];
    }
    printf("Copy of main array is: \n");
    for (i = 0; i < n; i++) 
    {
        printf("%d  ", copy[i]);
    }
    return 0;
}
