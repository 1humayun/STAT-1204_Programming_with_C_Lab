
//C Program to accept ten numbers and display sum of even and product of odd numbers...
#include<stdio.h>

main()
{
    int n, i, sum = 0, pro = 1;
    for (i = 1 ; i <= 10 ; i++)
    {
        printf("Enter n%d: ",i);
        scanf("%d",&n);
        if (n%2 == 0)
            sum = sum + n;
        else
            pro = pro * n;
    }
    printf("Sum of EVEN numbers: %d\nProduct of ODD numbers: %d",sum,pro);
}
