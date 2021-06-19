#include<stdio.h>
int main()
{
	char s[1000];
	int i,alpha=0,special=0,digit=0;
	printf("enter your string");
	gets(s);
	for(i=0;s[i];i++)
	{
		if(((s[i]>=65)&&(s[i]<=90)) || ((s[i]>=97)&&(s[i]<=122)))
		{
			alpha++;
		}
		 else if(((s[i]>=48)&&s[i]<=57))
		{
			digit++;
		}
		else
		{
			special++;
		}
	}
	printf("number of alphabets is %d\n",alpha);
	printf("number of digits in the string is %d\n",digit);
	printf("number of special characters is %d\n",special);
	
	return 0;
	
}
