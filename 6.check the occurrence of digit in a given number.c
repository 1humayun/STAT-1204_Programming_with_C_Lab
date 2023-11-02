//C Program to check the occurrence of digit in a given number...

#include<stdio.h>

main()
{
    long long int num;
    int digit, count = 0;
    printf("Enter the number: ");
    scanf("%lld",&num);
    printf("Enter digit to check: ");
    scanf("%d",&digit);

    while (num != 0)
    {
        int lastDigit = num%10;
        if (lastDigit == digit)
            count = count + 1;
        num = num/10;
    }
    printf("Total occurrences: %d",count);
}
