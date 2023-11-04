//C program to find sum of numbers Series : 1+2+3+4+….+N...
#include<stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    for (i = 1 ; i <= n ; i++)
    {
        printf("%d",i);
        sum = sum + i;
        if (i<n)
            printf(" + ");
    }
    printf("\nSum of the Series is %d\n",sum);
    return 0;
}
