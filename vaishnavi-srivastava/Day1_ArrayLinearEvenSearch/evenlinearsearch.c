//Find even numbers of element in the array//
#include<stdio.h>
int main()
{
    int array[100],size,count=0;
    printf("Enter desired size of the array: ");
    scanf("%d",&size);
    printf("Enter the elements in the array-\n");
    for(int i=0 ; i<size ; i++)
       scanf("%d",&array[i]);
    for(int i=0 ; i<size ; i++)
       {
           if(array[i]%2==0)
             count++;
       }
    printf("Number of even numbers in the array are- %d",count);
    return 0;
}