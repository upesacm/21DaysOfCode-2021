#include<stdio.h>
int main()
{
    int n;
    printf("Enter number -> ");
    scanf("%d",&n);
    int num[n],i,j;
    for(i=0;i<n;i++)
    num[i]=i+1;
    
    for(i=0;i<n;i++)
    printf("%d\n",num[i]);

    for(i=2;i<n;i++)
    {
        for(j=2;j<num[i];j++)
        {
            if(num[i]%j==0)
            num[i]=0;
        }
    }
    printf("after sieve of eratosthenes");
    for(i=0;i<n;i++)
    printf("%d\n",num[i]);
    
    printf("Prime numbers:");
    for(i=1;i<n;i++)
    {
        if(num[i]!=0)
        printf("%d\n",num[i]);
    }
    return 0;
}