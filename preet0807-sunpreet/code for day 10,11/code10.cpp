#include<stdio.h>
int main()
{
	int n,a,b;
	scanf("%d",&n);
	if(n>9)
	{
		printf("invalid number");
	
	}
	a=n*n;
	
	b=a%10;
	if(n==b)
	{
		printf("Automorphic");
	}
		else 
		{
			printf("not automorphic");
		}
		
	
}
