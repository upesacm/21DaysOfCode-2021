
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ch,s[40],sen[100];
    scanf("%c",&ch);
    scanf("%s",&s);
    scanf(" %[^\n]%*c",&sen);

    printf("%c \n",ch);
    printf("%s \n",s);
    printf("%s",sen);
    

}