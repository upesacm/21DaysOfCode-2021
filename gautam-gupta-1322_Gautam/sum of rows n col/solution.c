#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    printf("Enter rows and coloumns of matrix -");
    int r,c,i,j,sum,k;
    scanf("%d %d",&r,&c);
    arr=(int *)malloc(r*c*sizeof(int));
    if(arr== NULL)
    {
        printf("\nmemory not allocated!!!");
        exit(1);
    }
    printf("Enter the elements of matrix row/wise - ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",(arr+(i*c)+j));
        }
    }
    printf("\narray which you entered -\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        printf("%d",*(arr+(i*c)+j));
        
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        sum=0;
        for(j=0;j<c;j++)
        sum=sum+*(arr+i*c+j);
        
        printf("\n sum of all elements of row %d are %d",i+1,sum);
    }
    for (i=0;i<c;i++)
    {
        sum=0;
        for(j=0,k=0;j<r;j++)
        {
            sum=sum+*(arr+i+k);
            k+=c;
        }
        printf("\nsum of coloumn no. %d is %d",i+1,sum);
    }

    return 0;
}