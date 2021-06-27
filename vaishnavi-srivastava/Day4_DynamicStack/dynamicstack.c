#include <stdio.h>
#include <stdlib.h>
//structure node as stack
struct node         
{
    int data;
    struct node *next;
};
//initialising the pointer as NULL
struct node *top = NULL;
//function to insert element
void push(int item)
{
    struct node *nptr = malloc(sizeof(struct node));
    nptr->data = item;
    nptr->next = top;
    top = nptr;
};
//function to delete element
void pop()
{
    if (top == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        struct node *temp;
        temp = top;
        top = top->next;
        printf("%d deleted\n", temp->data);
        free(temp);
    }
};
//function to display the stack
void display()
{
    struct node *temp;
    temp = top;
    printf("\n The stack is-\n");
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
};
int main()
{
    int n, ch;
    do
    {
        printf("\nStack Menu\n1. Push \n2. Pop\n3. Display\n0. Exit");
        printf("\nEnter Choice 0-3? : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:                                 //push
                printf("Enter number: ");
                scanf("%d", &n);
                push(n);
                break;
            case 2:                                 //pop
                pop();
                break;
            case 3:                                 //exit-display and exit
                display();
                break;
        }
    }
    while (ch != 0);
}