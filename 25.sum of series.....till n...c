//C program to find sum of series:1 + 3^2/3^3 + 5^2/5^3 + 7^2/7^3 + … till N terms

#include<stdio.h>
#include<math.h>

int main()
{
    int n, i;
    float sum = 0.0;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    for (i = 1 ; i <= n ; i=i+2)
    {
        float temp = pow(i,2)/pow(i,3);
        printf("%d^2/%d^3",i,i);
        sum = sum + temp;
        if (i<n)
            printf(" + ");
    }
    printf("\nSum of the Series is %f\n",sum);
    return 0;
}
