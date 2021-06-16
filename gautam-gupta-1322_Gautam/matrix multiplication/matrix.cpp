#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr1,*arr2,*arr3;
    printf("Enter rows and coloumns of matrix-1 -");
    int r1,c1,r2,c2,i,j,sum,k,r,c;
    scanf("%d %d",&r1,&c1);
    arr1=(int *)malloc(r1*c1*sizeof(int));
    if(arr1== NULL)
    {
        printf("\nmemory not allocated!!!");
        exit(1);
    }
    printf("Enter the elements of matrix-1 row/wise - ");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",(arr1+(i*c1)+j));
        }
    }
    printf("\nmatrix-1 which you entered -\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        printf("%d  ,",*(arr1+(i*c1)+j));
        
        printf("\n");
    }
    printf("Enter rows and coloumns of matrix-2 -");
    scanf("%d %d",&r2,&c2);
    arr2=(int *)malloc(r2*c2*sizeof(int));
    if(arr2== NULL)
    {
        printf("\nmemory not allocated!!!");
        exit(1);
    }
    printf("Enter the elements of matrix-1 row/wise - ");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",(arr2+(i*c2)+j));
        }
    }
    printf("\nmatrix-2 which you entered -\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        printf("%d  ,",*(arr2+(i*c2)+j));
        
        printf("\n");
    }
    if(c1!=r2)
    {
        printf("\nTwo mattrices cant be multiplied!!");
        exit(1);
    }
    r=r1;
    c=c2;
    arr3=(int *)malloc(r*c*sizeof(int));
    if(arr3== NULL)
    {
        printf("\nmemory not allocated!!!");
        exit(1);
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            sum=0;
            for(int x=0;x<c1;x++)
            {
                sum=sum + (*(arr1+(i*c1)+x) * (*(arr2+j+(x*c2))));
            }
           *(arr3+(i*c)+j)=sum;
        }
    }
    printf("\nProduct matrix formed after multiplication of first two matrices -\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        printf("%d  ,",*(arr3+(i*c)+j));
        
        printf("\n");
    }
}