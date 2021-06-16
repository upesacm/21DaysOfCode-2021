#include<stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);

    char c[40]= "";
    scanf("%s",&c);
    char sent[40];
    scanf("\n");
   scanf("%[^\n]%*c", sent);
    
    printf("%c\n",ch);
    printf("%s\n",c);
    printf("%s",sent);
    

    return 0;
}

