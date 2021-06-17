#include<stdio.h>
#include<conio.h>

// TRAVERSAL OF ARRAY
int main()
{
    int a[50],size,i;
    printf("enter the size of array: ");
    scanf("%d",&size);
    printf("enter the elements of array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("elements of array are: \n");
    for(i=0;i<size;i++)
    {
        printf("%d \n",a[i]);

    }
}

// INSERTION IN ARRAY:

int main()
{
    int a[50],size,num,pos,i;
    printf("enter the size of array:");
    scanf("%d",&size);
    printf("Enter the elements of array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]); 
    }
    
    printf("enter the data you want to insert: ");
    scanf("%d",&num);
    printf("Enter the position where you want to insert: ");
    scanf("%d",&pos);
    for(i=size-1; i>= pos-1; i--)
    {
       a[i+1]=a[1]; 
    }
    a[pos-1]=num;
    size++;
    printf("elements are: ");
    for(i=0; i<size;i++)
    printf("%d \n",a[i]);

}

// DELETION IN ARRAY

int main()
{
    int a[50],pos,size,i;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("enter the elements of array:");
    for(i=0;i<size;i++)
    {
       scanf("%d",&a[i]); 
    }
    printf("enter the position from where you want to delete: ");
    scanf("%d",&pos);
    if(pos<=0 || pos>size)
    {
        printf("invalid position");
    }
    else
    {
        for(i=pos-1; i<size;i++)
        {
            a[i]=a[i+1];
        }
        size--;
    }
    printf("ELEMENTS IN ARRAY ARE :");
    for(i=0;i<size;i++)
    {
        printf("%d \n",a[i]);
    }
}