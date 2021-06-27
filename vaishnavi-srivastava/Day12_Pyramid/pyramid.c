#include<stdio.h>
int main()
{
   //declaring variables 
   int i,space,rows,k=0;
   printf("Enter the number of rows: ");
   scanf("%d",&rows);
   for(i=1 ; i <= rows ; ++i, k = 0) 
      {
        for(space=1 ; space<=rows-i ; ++space) 
           {
             //printing the gap
             printf("  ");
           }
        while(k!=2*i-1)
           {
             //printing * 
             printf("* ");
             //incrementing the value of k
             ++k;
           }
      //changing line
      printf("\n");
      }
   return 0;
}