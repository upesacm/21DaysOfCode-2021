// to reverse first n elements of a linked list ...
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
}*newnode,*ptr,*head=0,*next;
int n;
void add()
{
    printf("\nEnter the data -> ");
    for(int i=1;i<=n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->next=0;
        scanf("%d",&newnode->data);
        if(head==0)
        {
            head = newnode;
            ptr=newnode;
        }
        else
        {
            ptr->next=newnode;
            ptr=newnode;
        }
    }
}
void display()
{
    ptr=head;
    while(ptr!=0)
    {
        printf(" %d,",ptr->data);
        ptr=ptr->next;
    }
}
void reverse(int r)
{
    ptr=head;
    newnode=head;
    for(int i=1;i<r;i++)
    {
        if(i==1)
        {
            next=newnode->next;
        }
        ptr=next->next;
        next->next=newnode;
        newnode=next;
        if(i!=r-1)
        {
            next=ptr;
        }
    }
    head->next=ptr;
    head=next;
}
int main()
{
    int r;
    printf("\nEnter the number of elements you want in your list -> ");
    scanf("%d",&n);
    add();
    display();
    printf("\nEnter how many elements you wwant to reverse from start -> ");
    scanf("%d",&r);
    reverse(r);
    display();

    return 0;
}