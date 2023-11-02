
//C Program to check whether number is EVEN or ODD

#include<stdio.h>

main()
{
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    if (n%2 == 0)
        printf("The number is EVEN.");
    else
        printf("The number is ODD.");
    printf("\n");
}
