//C Program To find largest and smallest number and their positions...
#include<stdio.h>

int main()
{
    int n, i, largest, large_pos, smallest, small_pos;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int list[n];

    //getting input from user...
    printf("Please enter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &list[i]);
    }

    //finding largest number and position...
    largest = list[0];
    for(i=0; i<n; i++)
    {
        if (largest < list[i])
        {
            largest = list[i];
            large_pos = i + 1;
        }

    }

    //finding smallest number and position...
    smallest = list[i];
    for(i=0; i<n; i++)
    {
        if (smallest > list[i])
        {
            smallest = list[i];
            small_pos = i + 1;
        }

    }

    printf("The Largest number is %d and it's position is %d.\n", largest, large_pos);
    printf("The Smallest number is %d and it's position is %d.\n", smallest, small_pos);
    return 0;
}
