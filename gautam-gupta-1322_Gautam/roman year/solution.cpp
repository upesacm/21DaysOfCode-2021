#include<stdio.h>
void main()
{
    void year(int);
    int n;
    printf("Enter the year which you want to convert in roman form:");
    scanf("%d",&n);
    printf("\nYear in roman form:");
    year(n);
}
void year(int n)
{
    int t,i,f,h,e,v;
    t=n/1000;
    for(i=1;i<=t;i++)
    {
        printf("M");
    }
    n=n%1000;
    f=n/500;
    if(f==1)
    {
        printf("D");
    }
    n=n%500;
    h=n/100;
    for(i=1;i<=h;i++)
    {
        printf("C");
    }
    n=n%100;
    e=n/10;
    switch(e)
    {
        case 9:
            printf("XC");
            break;
        case 8:
            printf("LXXX");
            break;
        case 7:
            printf("LXX");
            break;
        case 6:
            printf("LX");
            break;
        case 5:
            printf("L");
            break;
        case 4:
            printf("XL");
            break;
        default:
            for(i=1;i<=e;i++)
            printf("X");
    }
    n=n%10;
    if(n==9)
    {
        printf("IX");
    }
    else
    {
        v=n/5;
        for(i=1;i<=v;i++)
        {
            printf("V");
        }
        n=n%5;
        if(n==4)
        {
            printf("IV");
        }
        else
        {
            for(i=1;i<=n;i++)
            printf("I");
        }
    }
}