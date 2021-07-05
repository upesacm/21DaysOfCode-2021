#include<stdio.h>
int factorial(int num)
{
   int fact; 
   if(num<=1)
     return 1;
   else
     fact=num*factorial(num-1);
   return fact;
}
int main()
{
    int num,fact;
    printf("Enter the number: ");
    scanf("%d",&num);
    fact=factorial(num);
    printf("Factorial= %d",fact);
    return 0;
}