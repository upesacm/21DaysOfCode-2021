#include <stdio.h>
int main()
{
    printf("Enter size of array ->");
    int n,count=0;
    int k,j=n-1;
    scanf("%d",&n);
    int arr[n];
    printf("enter elements ->");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==0)
        {
            k=i;
            count++;
        }
    }
    for(int i=k;i>=0;i--)
    {
        if((arr[i]==0)&&(i<(n-count)))
        {
            for(j=n-1;j>=0;j--)
            {
                if(arr[j]!=0)
                {
                    int c=arr[j];
                    arr[j]=arr[i];
                    arr[i]=c;
                }
            }
        }
    }
    printf("array after moving zero - ");
    for(int i=0;i<n;i++)
    {
        printf(" %d,",arr[i]);
    }
    return 0;
}