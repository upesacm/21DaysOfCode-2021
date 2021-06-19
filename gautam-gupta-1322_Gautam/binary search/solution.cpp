#include <stdio.h>
void binar(int * arr,int x);
int main()
{
    int x;
    printf("Enter size of array ->");
    scanf("%d",&x);
    int arr[x];
    printf("Enter elements in ascending order !!! ->");
    for(int i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    binar(arr,x);
    return 0;
}
void binar(int * arr,int x)
{
    printf("Enter the number you want to search for ->");
    int n;
    scanf("%d",&n);
    int low=0,high=x-1,mid=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==n)
        {
            printf("\nElement found !!!");
            return;
        }
        else if(n>arr[mid])
        {
            low=mid+1;
        }
        else if(n<arr[mid])
        {
            high=mid-1;
        }
    }
    printf("\nElement not found !!!");
}