
//C program to find the difference of two numbers...
#include<stdio.h>

int main()
{
    int a, b, dif;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    if (a>b)
        dif = a-b;
    else
    {
        int temp = a;
        a = b;
        b = temp;
        dif = a-b;
    }
    printf("The difference of two numbers is %d", dif);
    return 0;
}