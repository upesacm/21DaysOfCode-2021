#include<stdio.h>
int main()
{
	int n,i,b,c,a=0;
	//armstrong number from 1 to 500

	
	for(i=1;i<=500;i++)
	{
		n=i;
	
		
		
	   	
	
	 while (n!=0)
	 {
	 	b=n%10;
	 	a= a+(b*b*b);
	 	
	 	n=n/10;
	 }
	   if(a==i)
	 
	 	printf("%d\n",i);
	
	 a=0;
	 
}
return 0;
}

