
//C program to find sum of Series : 1^2 + 2^2 + 3^2 + 4^2 + …. + N^2

#include<stdio.h>
#include<math.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    for (i = 1 ; i <= n ; i++)
    {
        printf("%d^2",i);
        sum = sum + pow(i,2);
        if (i<n)
            printf(" + ");
    }
    printf("\nSum of the Series is %d\n",sum);
    return 0;
}
