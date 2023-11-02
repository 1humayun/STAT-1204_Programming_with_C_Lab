
//C program to calculate x^n using pow function...
#include<stdio.h>
#include<math.h>

int main()
{
    int x, n, result;
    printf("Enter the value of x and n: ");
    scanf("%d%d", &x, &n);
    result = pow(x, n);
    printf("The result of %d^%d is %d\n", x, n, result);
}
