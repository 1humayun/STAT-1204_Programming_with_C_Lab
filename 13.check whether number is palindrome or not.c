//C Program to check whether number is palindrome or not...

#include<stdio.h>

int main()
{
    int n, reverse = 0, main;
    printf("Enter the integer: ");
    scanf("%d",&n);
    main = n;
    while (n != 0)
    {
        int rem = n%10;
        reverse = reverse*10 + rem;
        n = n/10;
    }
    if (main==reverse)
        printf("The Number is Palindrome.\n");
    else
        printf("The Number is not Palindrome.\n");

    return 0;
}
