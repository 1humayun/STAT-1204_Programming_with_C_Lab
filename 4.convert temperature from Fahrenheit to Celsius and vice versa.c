
//C program to convert temperature from Fahrenheit to Celsius and vice versa...

#include<stdio.h>

main()
{
    float f, c;
    int t;
    printf("1. Fahrenheit to Celsius\n2. Celsius to Fahrenheit.\nChoose a option(1/2): ");
    scanf("%d",&t);
    if (t == 1)
    {

        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f",&f);
        c = (f-32)*5/9;
        printf("%.2f degree Celsius.",c);
    }
    else if(t == 2)
    {

        printf("Enter the temperature in Celsius: ");
        scanf("%f",&c);
        f = (c*9)/5 + 32;
        printf("%.2f degree Fahrenheit.",f);
    }
    else
        printf("Please choose a valid option.")
}
