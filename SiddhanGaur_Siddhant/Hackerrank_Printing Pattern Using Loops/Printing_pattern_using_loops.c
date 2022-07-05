#include <stdio.h>
int main()
{
    int i=0,j=0,r=0,m=0,n=0,x=0;
    scanf("%d",&n);
    r=n;
    m = n+(n-1);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i<=n-1)
            {        
                if(i==0)
                {
                    printf("%d ",r);
                }
                if(i>=1)
                {
                    if(j<i)
                    {
                        printf("%d ",r-j);
                    }
                    else if(j>=i && j<m-i)
                    {
                        printf("%d ",r-i);
                    }
                    else 
                    {
                        printf("%d ",(j-r+1)+1);
                    }
                }
            }
            else if(i==n-1)
            {
                if(j<n)
                {
                    printf("%d ",r-j);
                }
                else
                {
                    printf("%d ",(j-r+1)+1);
                }
            }
            else if(i>=n)
            {
                x = m-i-1;
                if(i==m)
                {
                    printf("%d ",r);
                }
                if(j<x)
                {
                    printf("%d ",r-j);
                }
                else if(j>=x && j<m-x)
                {
                    printf("%d ",r-x);
                }
                else 
                {
                    printf("%d ",(j-r+1)+1);
                }    
            }
        }
        printf("\n");
    }
}