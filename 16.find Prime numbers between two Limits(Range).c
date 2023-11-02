
//C Program to find Prime numbers between two Limits(Range)...
#include<stdio.h>
#include<math.h>

int isPrime(int n)
{
    float sqroot = sqrt(n);
    int i;
    if (n<2)
        return 0;
    for (i=2 ; i<=sqroot ; i++)
    {
        if (n%i == 0)
            return 0;
    }
    return 1;
}
int main()
{

    int lowerlim, upperlim, num;
    printf("Enter lower limit and upper limit: ");
    scanf("%d %d",&lowerlim, &upperlim);
    printf("Prime numbers between %d and %d are: \n",lowerlim, upperlim);
    for( num = lowerlim ; num <= upperlim ; num++)
    {
        if (isPrime(num))
            printf("\t%d",num);
    }
    printf("\n");
}
