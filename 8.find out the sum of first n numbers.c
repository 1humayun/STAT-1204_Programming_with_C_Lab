
//C Program to find out the sum of first n numbers...

#include<stdio.h>

main()
{
    int i, n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    i = 0;
    while (i<=n)
    {
        sum = sum+i;
        i++;
    }
    printf("Sum of the first n numbers: %d",sum);
}
