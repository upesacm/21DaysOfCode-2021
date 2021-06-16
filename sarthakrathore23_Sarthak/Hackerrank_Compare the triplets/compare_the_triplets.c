#include <stdio.h>
int main()
{
    int a[10], b[10],x=0,y=0;
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    scanf("%d %d %d",&b[0],&b[1],&b[2]);
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            x++;
        }
        else if(b[i]>a[i])
        {
            y++;
        }
    }
    printf("%d %d",x,y);
    return 0;
}