
//C program to find the biggest and smallest numbers from a list of numbers...
//Same as problem no-10...

#include<stdio.h>

int main()
{
    int n, i, largest, smallest;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int list[n];

    //getting input from user...
    printf("Please enter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &list[i]);
    }

    //finding largest number...
    largest = list[0];
    for(i=0; i<n; i++)
    {
        if (largest < list[i])
        {
            largest = list[i];
        }

    }

    //finding smallest number...
    smallest = list[i];
    for(i=0; i<n; i++)
    {
        if (smallest > list[i])
        {
            smallest = list[i];
        }

    }

    printf("The Largest number is %d.\n", largest);
    printf("The Smallest number is %d.\n", smallest);
    return 0;
}
