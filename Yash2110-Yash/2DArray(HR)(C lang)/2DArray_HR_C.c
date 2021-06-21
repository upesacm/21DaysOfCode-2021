#include<stdio.h>
int main()
{
    int i,j,arr[6][6],sum;
    int max=0;
    int flag=1;
    
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(i=1;i<5;i++)
    {
        for(j=1;j<5;j++)
        {
            sum=arr[i][j]+arr[i-1][j-1]+arr[i-1][j]+arr[i-1][j+1]+arr[i+1][j-1]+arr[i+1][j]+arr[i+1][j+1];
        if(flag==1)
        {
            max=sum;
            flag=0;
        }
        if(max<sum)
        {
            max=sum;
        }
        }
    }
    printf("%d",max);
    
return 0;
}