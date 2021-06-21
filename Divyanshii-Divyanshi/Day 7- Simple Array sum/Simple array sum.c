#include <stdio.h>

int main() 
{
    int a[1000],n=1,i=0,r=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d ",&a[i]);
        r=r+a[i];
        }
    printf("%d",r);
       
    return 0;
}
