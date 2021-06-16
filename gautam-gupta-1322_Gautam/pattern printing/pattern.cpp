#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
      int i,j,k,x,y;
    k=n;
    y=3;
    x=2*n-1;
    for(i=1;i<2*n;i++)
    {
        if(i!=1&&i<=n) // loop for 1st triangle which will start from 2nd row , 1st col
        {
            for(j=1,k=n;j<i;j++,k--)
            printf("%d ",k);
        }
        if(i<=n) // loop for 2nd triangle starting from 1st row , 1st col
        {
            for(j=1;j<=x;j++)
            printf("%d ",k);
        }
        if(i!=1&&i<=n) // loop for 3rd triangle starting from 2nd row , last col
        {
            for(j=1;j<i;j++)
            printf("%d ",++k);
        }
        if(i>n&&i!=2*n-1)
        {
            for(j=i,k=n;j<2*n-1;j++,k--)
            printf("%d ",k);
        }
        if(i>n)
        {
            for(j=1;j<=y;j++)
            printf("%d ",k);
            
            y=y+2;
        }
        if(i>n&&i!=2*n-1)
        {
            for(j=i;j<2*n-1;j++)
            printf("%d ",++k);
        }
        x=x-2;
        printf("\n");
    }
    return 0;
}