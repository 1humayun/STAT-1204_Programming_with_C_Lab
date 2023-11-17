#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i]; // Adding each element to the sum
    }

    printf("Sum of all elements in the array: %d\n", sum);

    return 0;
}
