#include<stdio.h>
int main()
{
    int n, c=0, d=0, b=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>c)
        {
            c=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==c)
        {
            d++;
        }
    }
    printf("%d",d);
    return 0;
}