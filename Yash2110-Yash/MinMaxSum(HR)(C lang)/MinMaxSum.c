#include<stdio.h>
int main()
{
    long int arr[5];
    long int max,min,sum=0;
    int i;
    
    for(i=0;i<5;i++)
    {
        scanf("%ld",&arr[i]);
        sum=sum+arr[i];
    }
    min=arr[0];
    for(i=0;i<5;i++)                //for loop to find the smallest number
    {
        if (min>arr[i]) 
        min=arr[i];
    }
    
    max=arr[0];
    
    for(i=0;i<5;i++)               //for loop to find the largest number
    {
        if(max<arr[i])
        max=arr[i];
    }
    
    printf("%ld %ld",sum-max,sum-min);
    return  0;
    
    
}
