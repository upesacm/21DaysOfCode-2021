#include<stdio.h>
int main()
{
   int i,n,j;
   printf("enter the value of n: ");
   scanf("%d",&n);
   for(i=n;i>=1;i--)
   {
      for(j=1;j<=i;j++)
      {
         printf("%c",64+j);
      }
      printf("\n");
   }
return 0;
}
