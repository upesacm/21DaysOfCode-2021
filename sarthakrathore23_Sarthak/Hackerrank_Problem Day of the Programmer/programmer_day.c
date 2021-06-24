#include <stdio.h>
int main()
{
    int year,leap_year; 
    scanf("%d",&year);
    leap_year=0;
    if (year % 4 == 0) 
        leap_year=1;
    if (year > 1918)
    {
        if (year % 100 == 0) 
        leap_year=0;
        if (year % 400 == 0) 
        leap_year=1;
    }
    if (year!=1918) 
    {
        if (leap_year==0) 
        printf("13.09.%d\n",year);
        else 
        printf("12.09.%d\n",year);
    }
    else 
    printf("26.09.%d\n",year);
    return 0;
}