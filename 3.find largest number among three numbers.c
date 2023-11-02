//C Program to find largest number among three numbers...

#include<stdio.h>

main()
{
    int a, b, c;
    printf("Enter the three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
        printf("%d is the largest number.",a);
    else if (b>a && b>c)
        printf("%d is the largest number.",b);
    else
        printf("%d is the largest number.",c);
}
