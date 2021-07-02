#include<stdio.h>
int top1=-1,top2;
void push(int*,int,int,int);
void pop(int*,int,int,int);
void display(int*,int,int,int);
int main()
{
    
    printf("Enter the size of stack-1 and stack-2 -> ");
    int n1,n2,ch,c,n,h;
    scanf("%d %d",&n1,&n2);
    top2=n1-1;
    n=n1+n2;
    int ar[n];
    do
    {
        printf("Edit menu --\n1.Push\n2.Pop\n3.Display\nEnter your choice ->");
        scanf("%d",&ch);
        printf("\nWant to perform operation on which stack (1/2) -> ");
        scanf("%d",&c);
        switch(ch)
        {
            case 1:
            push(ar,c,n1,n2);
            break;
            case 2:
            pop(ar,c,n1,n2);
            break;
            case 3:
            display(ar,c,n1,n2);
            break;
            default:
            printf("\nWrong choice !!!");
        }
        printf("\nWant to continue (press 1 for yes) - >");
        scanf("%d",&h);
    }while(h==1);
}
void push(int ar[],int c,int n1,int n2)
{
    int k;
    if(c==1)
    {
        top1++;
        if(top1==n1)
        {
            printf("\nSTACK 1 IS FULL !!! OVERFLOW");
            top1--;
            return;
        }
        else
        {
            printf("Enter the element you want to push ->");
            scanf("%d",&k);
            ar[top1]=k;
        }
    }
    else if(c==2)
    {
        top2++;
        if(top2==n1+n2)
        {
            printf("\nSTACK 2 IS FULL !!! OVERFLOW");
            top2--;
            return;
        }
        else
        {
            printf("Enter the element you want to push ->");
            scanf("%d",&k);
            ar[top2]=k;
        }
    }
}
void pop(int ar[],int c,int n1,int n2)
{
    if(c==1)
    {
        top1--;
        if(top1==-2)
        {
            printf("\nSTACK 1 IS EMPTY !!! UNDERFLOW");
            top1++;
            return;
        }
        else
        {
            printf("\nPOPPED element is -> %d",ar[top1+1]);
        }
    }
    else if(c==2)
    {
        top2--;
        if(top2==n1-2)
        {
            printf("\nSTACK 2 IS EMPTY !!! UNDERFLOW");
            top2++;
            return;
        }
        else
        {
            printf("\nPOPPED element is -> %d",ar[top2+1]);
        }
    }
}
void display(int ar[],int c,int n1,int n2)
{
    if(c==1)
    {
        if(top1==-1)
        printf("\nNo element in stack 1");
        else
        {
            for(int i=0;i<=top1;i++)
            {
                printf(" %d,",ar[i]);
            }
        }
    }
    else if(c==2)
    {
        if(top2==n1-1)
        printf("\nNo element in stack 2");
        else
        {
            for(int i=n1;i<=top2;i++)
            {
                printf(" %d,",ar[i]);
            }
        }
    }
}