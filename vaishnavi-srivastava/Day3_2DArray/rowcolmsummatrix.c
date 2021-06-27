//Finding the sum of row and column//
#include<stdio.h>
int main()
{
    int rows,columns,matrix[50][50],sum_r,sum_c;
    printf("Enter the size of the rows: ");
    scanf("%d",&rows);
    printf("Enter the size of the columns: ");
    scanf("%d",&columns);
    printf("Enter the elements in the matrix: \n");
    for(int i=0 ; i<rows ; i++)
       {
           for(int j=0 ; j<columns ; j++)
              {
                  scanf("%d",&matrix[i][j]);
              }
       }
    printf("The matrix is: \n");
    for(int i=0 ; i<rows ; i++)
       {
           for(int j=0 ; j<columns ; j++)
              {
                  printf("%d  ;  ",matrix[i][j]);
              }
           printf("\n");
       }
    for(int i=0 ; i<rows ; i++)
       {
           sum_r=0;
           for(int j=0 ; j<columns ; j++)
              {
                  sum_r=matrix[i][j]+sum_r;
              }
           printf("Sum of %d row=%d\n",i+1,sum_r);
       }
    for(int i=0 ; i<rows ; i++)
       {
           sum_c=0;
           for(int j=0 ; j<columns ; j++)
              {
                  sum_c=matrix[j][i]+sum_c;
              }
           printf("Sum of %d columns=%d\n",i+1,sum_c);
       }
    return 0;
}