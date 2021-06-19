#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d",&e);
    c=e;
    d = e+(e-1);
    for(a=0;a<d;a++)
    {
        for(b=0;b<d;b++)
        {
            if(a<=e-1)
            {        
                if(a==0)
                {
                printf("%d ",c);
                }
                if(a>=1)
                {
                    if(b<a)
                    {
                        printf("%d ",c-b);
                    }
                    else if(b>=a && b<d-a)
                    {
                        printf("%d ",c-a);
                    }
                    else 
                    {
                        printf("%d ",(b-c+1)+1);
                    }
                }
            }
            else if(a==e-1)
            {
                if(b<e)
                {
                    printf("%d ",c-b);
                }
                else
                {
                    printf("%d ",(b-c+1)+1);
                }
            }
            else if(a>=e)
            {
                f = d-a-1;
                if(a==d)
                {
                printf("%d ",c);
                }
                if(b<f)
                {
                    printf("%d ",c-b);
                }
                else if(b>=f && b<d-f)
                {
                    printf("%d ",c-f);
                }
                else 
                {
                    printf("%d ",(b-c+1)+1);
                }    
            }
        }
        printf("\e");
    }
}