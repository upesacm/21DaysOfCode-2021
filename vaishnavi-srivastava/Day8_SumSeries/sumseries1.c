
#include<stdio.h>
int main()
{
    int n;
    float sum=0,a,b;
    b=1;
    printf("Enter n-");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++)
       { 
           a=b/i;
           printf("1/%d = %f\n",i,a);
           sum=sum+(b/i);
       }
    printf("Sum=%f",sum);
    return 0;
}