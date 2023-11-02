
//C program to find HCF of two numbers...

#include<stdio.h>

int findHcf(int a, int b)
{
    while(a != b)
    {
        if (a > b)
            a = a-b;
        else
            b = b-a;
    }
    return a;
}

int main()
{
    int num1, num2, hcf;
    printf("Enter the two numbers to find HCF: ");
    scanf("%d%d",&num1,&num2);
    hcf = findHcf(num1, num2);
    printf("The HCF of %d and %d is %d\n",num1, num2, hcf);
    return 0;
}
