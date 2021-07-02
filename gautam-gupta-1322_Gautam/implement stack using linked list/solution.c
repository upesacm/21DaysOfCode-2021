// Stack through linked - list .
#include<stdio.h>
#include<stdlib.h>
int n;
void getdata(void);
void insert(void);
void delete(void);
void display(void);
struct stack
{
    int data;
    struct stack *next;
}*head=0,*newnode,*ptr;
void getdata()
{
    printf("\nEnter data -> ");
    for(int i=1;i<=n;i++)
    {
        newnode=(struct stack *)malloc(sizeof(struct stack));
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=newnode;
            ptr=newnode;
        }
        else
        {
            ptr->next=newnode;
            ptr=newnode;
        }
    }
}
void insert(void) // in stack we can only insert from one side...
{
    ptr=head;
    newnode=(struct stack *)malloc(sizeof(struct stack));
    printf("\nEnter the data which you want to insert in stack -> ");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
    n++;
}
void delete(void) // in stock we can only delete from one side...
{
    printf("\nPopping first element from stack which is %d !!!!!",head->data);
    ptr=head;
    head=ptr->next;
    free(ptr);
    n--;
}
void display(void)
{
    ptr=head;
    printf("\nyour entered list after changes is -> ");
    while(ptr!=0)
    {
        printf(" %d, ",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    int c,p;
    printf("Enter the no. of elements you want in your stack -> ");
    scanf("%d",&n);
    getdata();
    do
    {
        printf("\n......EDIT MENU ........\n\n1.Insert \n2.Delete \n3.Display \nEnter your choice --> ");
        scanf("%d",&c);
        if(c==1)
        {
            insert();
        }
        else if(c==2)
        {
            delete();
        }
        else if(c==3)
        {
            display();
        }
        printf("\nDo you want to edit more (1 - for yes / 0 - for no) -->");
        scanf("%d",&p);
    }while(p==1);
}