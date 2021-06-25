#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void pattern_creation(int n)
{
    int flag=n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<i;j++)
            printf("%d ",n-(j-1));
        
        for(int j=1;j<=2*flag-1;j++)
        {
            printf("%d ",n-(i-1));
        }
        for(int j=n-(i-1); j<n;j++)
            printf("%d ",j+1);
        flag--;
        printf("\n");
    }
    
    flag=n;
    int c=0;
    for(int i=2; i<=n; i++)
    {
        c=0;
        for(int j=i; j<n;j++)
        {
            printf("%d ",n-c);
            c++;
        }
            
        for(int j=1;j<=2*i-1;j++)
        {
            printf("%d ",i);
        }
        
        
        for(int j=i,k=i; j<n;j++)
        {
            printf("%d ", j+1);

        }
        flag--;
        printf("\n");
    }
    
    
}

int main() 
{

    int num;
    scanf("%d", &n);
     pattern_creation(n);
  	// Complete the code to print the pattern.
    return 0;
}