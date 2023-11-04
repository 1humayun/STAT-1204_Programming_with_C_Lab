//C program to count total number of digits of an entered number...

#include<stdio.h>

int main()
{
    long long int n;
    int count = 0;
    printf("Enter the number: ");
    scanf("%lld",&n);
    while ( n!=0 )
    {
        count = count + 1;
        n = n/10;
    }
    printf("Total number of digits %d",count);
    return 0;
}