//C Program to check whether number is prime or not...

#include<stdio.h>
#include<math.h>

int isPrime(int n)
{
    float temp = sqrt(n);
    int i;
    if (n<2)
        return 0;

    for (i=2 ; i <= temp ; i++)
    {
        if (n%i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if (isPrime(num))
        printf("The number is PRIME.");
    else
        printf("The number is not PRIME.");
}
