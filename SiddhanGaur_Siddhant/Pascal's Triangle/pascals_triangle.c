// pascal triangle
#include <stdio.h>
long fact(int);
int main()
{
   int n, c;
   scanf("%d",&n);
   for (int i=0;i<n;i++)
   {
      for (c = 0; c<=(n - i - 2); c++)
         printf(" ");
      for (c = 0; c<= i; c++)
         printf("%ld ",fact(i)/(fact(c)*fact(i-c)));
      printf("\n");
   }
   return 0;
}
long fact(int n)
{
   int j;
   long ans=1;
   for (j = 1; j <= n; j++)
        ans=ans*j;
   return ans;
}