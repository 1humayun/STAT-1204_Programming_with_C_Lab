//C program to multiply two numbers using plus operator...
#include<stdio.h>

int main()
{
    int a, b, i, result = 0;
    printf("Enter the two numbers: ");
    scanf("%d%d",&a, &b);
    for (i=1 ; i<=b ; i++)
    {
        result = result+a;
    }
    printf("Multiply of 2 numbers is %d",result);
}