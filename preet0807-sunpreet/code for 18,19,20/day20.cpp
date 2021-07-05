#include<stdio.h>
int main()
{

int n;
printf("Enter the size of array:");
scanf("%d",&n);
int arr[n];
int i, sum = 0;
printf("Enter the elements of array:");
for(i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}

for(i = 0; i < n; i++)
sum = sum + arr[i];
printf("The sum is %d",sum);
return 0;
}