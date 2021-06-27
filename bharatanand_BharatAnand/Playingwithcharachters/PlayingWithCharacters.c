#include <stdio.h>
int main() 
{
	
    char ch, s[20] , sen[20];
    scanf("%c %s %[^\n]%*c", &ch,&s,&sen); 
    
    printf("%c\n%s\n%s",ch,s,sen);
  	
    
    return 0;
}