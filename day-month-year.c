#include<stdio.h>

int main()
{
    int year,month,week,days;

    printf("Enter Days : ");
    scanf("%d",&days);

    year = (days - (days%365) ) / 365;
    days = (days % 365);

    month = (days - (days%30) ) / 30;
    days = (days % 30);

    week = (days - (days%7) ) / 7;
    days = days % 7;

    printf("%d year, %d months, %d weeks, %d days",year,month,week,days);

    return 0;
}
