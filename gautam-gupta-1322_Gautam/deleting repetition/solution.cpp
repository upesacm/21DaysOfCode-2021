#include<stdio.h>
int main()
{
    int n=20;
    int k;
    int i,j,x;
    int arr[n];
    printf("Enter elements of array -> ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        k=arr[i];
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(x=j;x<n-1;x++)
                arr[x]=arr[x+1];
                n--;
                j--;
            }
            
        }
    }
    printf("New array -> ");
    for(int i=0;i<n;i++)
    {
        printf(" %d,",arr[i]);
    }
    return 0;
}