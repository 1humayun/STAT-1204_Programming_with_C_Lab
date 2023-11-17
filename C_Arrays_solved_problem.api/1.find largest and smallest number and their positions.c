#include<stdio.h>

int main()
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: \n");
    for( i = 0 ; i < n ; i++ )
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int max = arr[0], min = arr[0], max_pos = 0, min_pos = 0;
    
    for( i = 0 ; i < n ; i++ )
    {
        if(arr[i] > max)
        {
            max = arr[i];
            max_pos = i;
        }

        if(arr[i] < min)
        {
            min = arr[i];
            min_pos = i;
        }
    }
    printf("Maximun value: %d\nPosition of maximum value: %d\nMinimum value: %d\nPosition of minimum value: %d\n", max, max_pos + 1, min, min_pos + 1);
    
    return 0;
}