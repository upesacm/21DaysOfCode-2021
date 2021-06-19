#include<stdio.h>
int main()
{
    char str[100];
    int a=0,i,j;
    printf("Enter a string - ");
    scanf(" %[^\n]s",str);
    for(i=0;str[i]!='\0';i++)
    j++;
    j=j-1;
    for(i=0;i<j;i++,j--)
    {
        if(str[i]!=str[j])
        {
            a=1;
            break;
        }
    }
    if(a==1)
    printf("\n Entered string is not a palindrome!!");
    else
    printf("\n Entered string is a palindrome");
    
}