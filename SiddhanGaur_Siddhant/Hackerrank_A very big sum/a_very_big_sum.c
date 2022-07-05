#include <stdio.h>
long Sum(long arr[],int size)
{
    int i=0;
    long sum;
    while(i<size)
    {
        sum =sum+arr[i];
        i++;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    long arr[n];
    for(int i=0; i<n; i++)
    {
       scanf("%lu",&arr[i]);
    }
    printf("%lu",Sum(arr,n));
    return 0;
}