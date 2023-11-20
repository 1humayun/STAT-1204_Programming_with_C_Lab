
//C Program to check the occurrence of numbers from a given list of N numbers...
#include<stdio.h>

int main()
{
    int n, digit, i, count = 0;
    
    printf("Enter the digit to check: ");
    scanf("%d", &digit);

    printf("Enter the number of elements(n): ");
    scanf("%d", &n);

    int list[n];
  
    printf("Enter the %d elements: ", n);
    for (i = 0 ; i < n ; i++)
    {
        scanf("%d", &list[i]);
        if (list[i] == digit)
        {
            count = count + 1;
        }
    }
    printf("Total occurrence in the list is %d", count);

    return 0;
}
