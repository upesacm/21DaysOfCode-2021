#include <stdio.h>
int main()
{
    int n, c, r, space = 1;
    int a=0;
    printf("Enter number of rows\n");
    scanf("%d", &n);
    for(int r=1; r<=n+1; r++)
   {

     for(int c=r; c<=n; c++)
     {
       printf(" ");
     }
        for(int x=1; x<=2*r-1; x++)
     {
        if(x<r) printf("%d",a++);
        else if(x==r) 
         printf("%d",a);
        else printf("%d",--a);
      }

      printf("\n");
   }
   for(int r=n; r>=1; r--)
   {
     for(int c=n; c>=r; c--)
     {
       printf(" ");
     }

     for(int x=1; x<=2*r-1; x++)
     {
       if(x<r) printf("%d",a++);
       else if(x==r) printf("%d",a);
       else printf("%d",--a);
     }
     printf("\n");
   }

   return 0;
}