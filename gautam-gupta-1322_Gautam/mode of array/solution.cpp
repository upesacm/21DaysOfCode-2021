#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements you want in your ->");
    scanf("%d",&n);
    int arr[n];
    int a=arr[0],c=0,count=0,i,j;
    int sign=0;
    printf("Enter elements -> ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)
    {
        j=i-1;
        int temp = arr[i];
        while(temp<arr[j]&&j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    count=1;
    for(i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        count++;
        else if(arr[i]!=arr[i+1])
        {
            if(c<count)
            {
                sign=0;
                a=arr[i];
                c=count;
            }
            else if(c==count)
            {
                sign=1;
            }
            count=1;
        }
    }
    if(sign==1)
    {
        printf("Mod does not exist !!!");
    }
    else
    {
        printf("Mod is %d",a);
    }
}