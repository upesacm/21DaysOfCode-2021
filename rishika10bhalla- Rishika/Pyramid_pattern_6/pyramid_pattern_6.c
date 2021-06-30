#include<stdio.h>
int main()
{
   int i,j,n,space;
   printf("Enter the value of n: ",n);
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      for(space=1;space<=i-1;space++)
      {
         printf(" ");
      }
      for(j=1;j<=(n*2)-(i*2-1);j++)
      {
         printf("*");
      }
      printf("\n");
   }
}