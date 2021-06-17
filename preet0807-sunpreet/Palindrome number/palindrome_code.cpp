// palindrome number
#include<stdio.h>
int main()
{

int a,b,n,r=0;

	printf("enter number");
	scanf("%d",&n);
	a=n;
	while(n!=0)
{

	
	b=n%10;
	r=r*10+b;
	n=n/10;
}  
if(r==a)
{
	printf(" number is palindrome");
	
}
else 
{
	printf("number is not palindrome");
	
}
return 0;
}
	
	

