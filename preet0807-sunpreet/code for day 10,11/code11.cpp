#include<stdio.h>
int main()
{
	int month,year;
	printf("enter the month and year");
	scanf("%d%d",&month,&year);
	if((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12))
	{
		printf("days are 31");
		
	}
	 else if((month==2) && (year%4==0))
	{
		printf("number of days are 29");
	}
	else if(month==2)
	{
		printf("number of days are 28");
	}
	else 
	{
		printf("number of days are 30");
	}
	
}
