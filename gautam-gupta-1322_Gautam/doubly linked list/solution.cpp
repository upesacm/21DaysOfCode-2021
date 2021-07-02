//Doubly linked list 
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
    struct node* prev;
}*head=0,*ptr,*newnode,*prevss,*ptr2,*head1=0;
int n,n1;
void display(struct node * p)
{
    ptr=p;
    while(ptr!=0)
    {
        printf("%d ,",ptr->data);
        ptr=ptr->next;
    }
}
void getdata() // To for base linked list
{
    printf("\nEnter data -> ");
    for(int i=1;i<=n;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        if(head==0)
        {
            newnode->prev=0;
            head=newnode;
            ptr=newnode;
        }
        else
        {
            newnode->prev=ptr;
            ptr->next=newnode;
            ptr=newnode;
        }
        newnode->next=0;
    }
}
void reverse()
{
    ptr=head;
    printf("\nLINKED LIST in reverse -> ");
    while(ptr->next!=0)
    {
        ptr=ptr->next;
    }
    while(ptr!=0)
    {
        printf("%d ,",ptr->data);
        ptr=ptr->prev;
    }
}
void search()
{
    int i=1,x;
    printf("\nEnter the data you want to search for -> ");
    scanf("%d",&x);
    ptr=head;
    for(i=1;ptr!=0;i++)
    {
        if(ptr->data==x)
        {
            printf("\nElement found at position - %d",i);
            return;
        }
        ptr=ptr->next;
    }
    printf("\nELEMENT NOT FOUND !!!");
}
void update()
{
    prevss=head;
    ptr=head;
    int x,pos;
    printf("\nEnter the element and its position after which you want to add ->");
    scanf("%d %d",&x,&pos);
    if(pos>n)
    {
        printf("\nInvalid position !!!");
        return;
    }
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    if(pos==n)
    {
        newnode->next=0;
        while(ptr->next!=0)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode;
        newnode->prev=ptr;
    }
    else
    {
        for(int i=1;i<=pos;i++)
        {
            if(i==pos)
            {
                prevss=ptr->next;
                prevss->prev=newnode;
                newnode->next=ptr->next;
                ptr->next=newnode;
                newnode->prev=ptr;
            }
            else
            {
                ptr=ptr->next;
            }
        }
    }
    n++;
}
void rem()
{
    prevss=head;
    ptr=head;
    int x;
    printf("\nEnter the position from which you want to delete element -> ");
    scanf("%d",&x);
    if(x==1)
    {
        head=head->next;
        head->prev=0;
        free(prevss);
    }
    else if(x==n)
    {
        while(ptr->next!=0)
        {
            prevss=ptr;
            ptr=ptr->next;
        }
        prevss->next=0;
        free(ptr);
    }
    else
    {
        for(int i=1;i<x;i++)
        {
            prevss=ptr;
            ptr=ptr->next;
        }
        prevss->next=ptr->next;
        ptr2=ptr->next;
        ptr2->prev=prevss;
        free(ptr);
    }
    n--;
}
void combine()
{
    printf("\nEnter the no. of elements you want in your new list ->");
    scanf("%d",&n1);
    printf("\nEnter data -> ");
    for(int i=1;i<=n1;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->prev=0;
        if(head1==0)
        {
            head1=newnode;
            ptr=newnode;
        }
        else
        {
            newnode->prev=ptr;
            ptr->next=newnode;
            ptr=newnode;
        }
        newnode->next=0;
    }
    ptr=head;
    while(ptr->next!=0)
    {
        ptr=ptr->next;
    }
    ptr->next=head1;
    head1->prev=ptr;
    n=n+n1;
    printf("your list after combination ->");
    display(head);
}
void split()
{
    ptr=head;
    int pos;
    printf("\nEnter the position after which you want to split ->");
    scanf("%d",&pos);
    for(int i=1;i<=n;i++)
    {
        if(i==pos)
        {
            prevss=ptr;
            ptr=ptr->next;
            prevss->next=0;
        }
        else if(i==pos+1)
        {
            ptr->prev=0;
            head1=ptr;
            ptr=ptr->next;
        }
        else if(i==n)
        {
            ptr->next=0;
            ptr=ptr->next;
        }
        else
        ptr=ptr->next;
    }
    printf("\nAfter split - \nList1--> ");
    display(head);
    printf("\nList2--> ");
    display(head1);
    n=pos;
}
int main()
{
    int x,ch,c;
    printf("Enter the no. of elements you want in your doubly list -> ");
    scanf("%d",&n);
    getdata();
    ptr=head;
    do
    {
        printf("\nCOMMAND MENU !!!\n");
        printf("1.Print in reverse\n2.Search for an element\n3.Update\n4.Display\n5.Remove an element\n6.Combine\n7.Split\n8.Total elements of list\nEnter your choice -->");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            reverse();
            break;
            
            case 2:
            search();
            break;
            
            case 3:
            update();
            display(head);
            break;
            
            case 4:
            display(head);
            break;
            
            case 5:
            rem();
            display(head);
            break;
            
            case 6:
            combine();
            break;
            
            case 7:
            split();
            break;
            
            case 8:
            printf("\nTotal elements in doubly linked list are = %d",n);
            break;;
            
            default :
            printf("Invalid choice");
            break;
        }
        printf("\nDo you want to give more commands (1 for yes) -> ");
        scanf("%d",&c);
    }while(c==1);
}