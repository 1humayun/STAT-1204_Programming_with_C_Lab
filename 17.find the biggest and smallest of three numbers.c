//C program to find the biggest and smallest of three numbers...
#include<stdio.h>

int main()
{
    int a, b, c, big, small;
    printf("Enter the three numbers: ");
    scanf("%d%d%d",&a, &b, &c);
    if (a > b && a > c)
        big = a;
    else if ( b > a && b > c)
        big = b;
    else
        big = c;
    if (a < b && a < c)
        small = a;
    else if ( b < a && b < c)
        small = b;
    else
        small = c;

    printf("The Biggest Number of three numbers is %d\nThe Smallest Number of three numbers is %d\n",big, small);
}