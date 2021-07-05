//Algorithm to replace all 0's with 1 in a given integer
#include<stdio.h>

int replace( int number)
{
if (number == 0)
return 0;

int digit = number % 10;
if (digit == 0)
digit = 1;

return replace(number/10) * 10 + digit;
}

int Convert( int number)
{
if (number == 0)
return 1;
else
return replace(number);
}

int main()
{
long int number;
printf("enter the number");
scanf("%d", &number);
printf("\nNumber after replacement : %d", Convert(number));
return 0;
}


