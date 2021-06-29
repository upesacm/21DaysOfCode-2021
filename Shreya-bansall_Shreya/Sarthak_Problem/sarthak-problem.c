#include<stdio.h> 
int main()
{
   int n, a=0;

   printf("Enter value of n: ");
   scanf("%d",&n);
   for(int i=1; i<=n+1; i++)
   {
     for(int j=i; j<=n; j++)
     {
       printf(" ");
     }
     for(int k=1; k<=2*i-1; k++)
     {
        if(k<i) printf("%d",a++);
        else if(k==i) printf("%d",a);
        else printf("%d",--a);
      }
      printf("\n");
   }
   for(int i=n; i>=1; i--)
   {
     for(int j=n; j>=i; j--)
     {
       printf(" ");
     }
     for(int k=1; k<=2*i-1; k++)
     {
       if(k<i) printf("%d",a++);
       else if(k==i) printf("%d",a);
       else printf("%d",--a);
     }
     printf("\n");
   }
   return 0;
}