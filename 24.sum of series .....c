//C program to find sum of series: 1+ 1/2 + 1/3 + 1/4 + 1/5 + ……….. + 1/N

#include<stdio.h>

int main()
{
    int n, i;
    float sum = 0.0;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    for (i = 1 ; i <= n ; i++)
    {
        printf("1/%d",i);
        sum = sum + 1.0/i;
        if (i<n)
            printf(" + ");
    }
    printf("\nSum of the Series is %f\n",sum);
    return 0;
}
