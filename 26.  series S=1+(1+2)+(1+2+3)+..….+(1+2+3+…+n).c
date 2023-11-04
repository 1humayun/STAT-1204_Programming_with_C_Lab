//C program to find Sum of series S=1+(1+2)+(1+2+3)+..�.+(1+2+3+�+n)...

#include<stdio.h>

int main()
{
    int n, i, j, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (i=1 ; i<=n ; i++)
    {
        int partial_sum = 0;
        for (j=1 ; j<=i ; j++)
        {
            partial_sum = partial_sum + j;
        }
        sum = sum + partial_sum;
    }
    printf("Sum of the series: %d",sum);
    return 0;
}
