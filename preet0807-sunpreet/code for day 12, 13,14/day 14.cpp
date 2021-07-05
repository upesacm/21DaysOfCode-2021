#include <stdio.h>
int main()
{
int a, b, i, f;
printf("\nEnter start value :");
scanf("%a",&a);
printf("\nEnter end value : ");
scanf("%d",&b);
printf("\nPrime Numbers between %d and %d : ", a, b);
while (a < b)
{
f = 0;

for(i = 2; i <= a/2; ++i)
{
if(a % i == 0)
{
f = 1;
break;
}
}
if (f == 0)
printf("%d ", a);
++a;
}
printf("\n");
return 0;
}
