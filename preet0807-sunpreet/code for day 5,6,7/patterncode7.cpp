#include<stdio.h>
int main()
{
	int j,i,rows,k=1;
	printf("Number of rows be ");
	scanf("%d",&rows);
	
	for(i=1;i<rows;i++)
	{
		for (j=1;j<=i;j++)
		{
			printf("%d",k);
			k++
		
		}
		printf("\n");
		
	}
	return 0;
}
	


