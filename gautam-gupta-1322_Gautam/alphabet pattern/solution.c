#include<stdio.h>
int main()
{
    int i=1,v=1,w,a,j,k,x=1;
    char c;
    printf("Enter the capital letter of which you want pattern:");
    scanf("%c",&c);
    a=c-64;
    w=c;
    if(c>=65&&c<=90)
    {
        for(i=1;i<=a;i++)              // loop to change lines.
        {
            for(j=65;j<=w;j++)         // loop for first half of line.
            {
                printf("%c",j);
            }
            if(i==1)                    
            {
                for(k=w-1;k>=65;k--)    // loop for 2nd half of 1st line.
                {
                    printf("%c",k);
                }
            }
            else
            {
                for(v=1;v<=x;v++)       // loop to print spaces.
                {
                    printf(" ");
                }
                for(k=w;k>=65;k--)      // loop to print second half of all the lines except first.
                {
                    printf("%c",k);
                }
                x=x+2;                  // increment for spaces
            }
            w--;
            printf("\n");
        }
    }
}