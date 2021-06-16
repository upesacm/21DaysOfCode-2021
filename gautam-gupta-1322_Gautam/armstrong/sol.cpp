// Program to print all armstrong no.s between 1 to 'n'. By- Gautam Gupta
#include<stdio.h>
#include<math.h>
int main()
{
    int n,z=1,k,sum,i=10,q,j=1;
    printf("Enter the no. till which you want to check armstrong no.s:");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        while(j%i!=j)
        {
            i=i*10;
            z=z+1;
        }
        for(i=10,sum=0,k=1;j%i!=j;)
        {
            q=(j%i)/k;
            sum=sum+pow(q,z);
            k=k*10;
            i=i*10;
        }
        sum=sum+pow(j/(i/10),z);
        if(j==sum)
            printf("armstrong:%d, ",j);
        
        
    }
    return 0;
}