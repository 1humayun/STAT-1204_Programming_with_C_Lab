#include<stdio.h>

int main()
{
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: \n",n);
    for(i = 0 ; i < n ; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d",&arr[i]);
    }
    for(i = 0 ; i < n ; i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}