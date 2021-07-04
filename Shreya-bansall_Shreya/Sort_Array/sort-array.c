#include <stdio.h>

int main()
{
	int Array[50], i, j, temp, Size;
	
	printf("Enter the Number of elements in an array :  ");
	scanf("%d", &Size);
	
	printf("\nEnter %d elements of an Array: \n", Size);
	for (i = 0; i < Size; i++)
	{
		scanf("%d", &Array[i]);
    }     
	for (i = 0; i < Size; i++)
	{
		for (j = i + 1; j < Size; j++)
		{
			if(Array[i] > Array[j])
			{
				temp = Array[i];
				Array[i] = Array[j];
				Array[j] = temp;
			}
			
		}
	}
	printf("Array in Ascending Order are : \n");
	for (i = 0; i < Size; i++)
	{
		printf("%d\t\n", Array[i]);
	}
	
	return 0;
}