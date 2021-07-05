#include<stdio.h>
int main()
{

	int num , total;
	scanf("%d",&num);
	
	 total = num * (num-1);
	 total=total/2 ;
	printf("%d",total);
	return 0;
}