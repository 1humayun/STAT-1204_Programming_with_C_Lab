//C program to convert Total days to year, month and days...

#include<stdio.h>

main()
{
    int total_days, year=0, month=0, days=0;
    printf("Enter the total days: ");
    scanf("%d",&total_days);
    year = total_days/365;
    month = (total_days%365)/30;
    days = (total_days%365)%30;
    printf("Years: %d\tMonths: %d\tDays: %d",year,month,days);
}
