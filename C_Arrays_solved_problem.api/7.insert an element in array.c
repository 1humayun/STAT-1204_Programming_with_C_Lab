#include <stdio.h>

int main() {
    int n, i, pos, newElement;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n + 1]; // Create an array with one extra space for the new element

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert the new element: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) 
    {
        printf("Invalid position.\n");
        return 1; // Exit with an error code
    }

    printf("Enter the new element to insert: ");
    scanf("%d", &newElement);

    // Shift elements to the right to make room for the new element
    for (i = n; i >= pos; i--) 
    {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
    arr[pos - 1] = newElement;

    printf("Array after insertion:\n");
    for (i = 0; i < n + 1; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
