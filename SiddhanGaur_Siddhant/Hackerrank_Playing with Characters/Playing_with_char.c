#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
char c;
char S[20];
char sen[20];

scanf("%c", &c);
scanf("%s", S);
scanf(" %[^\n]%*c", sen);

printf("%c\n", c);
printf("%s\n", S);
printf("%s", sen);
    return 0;
}