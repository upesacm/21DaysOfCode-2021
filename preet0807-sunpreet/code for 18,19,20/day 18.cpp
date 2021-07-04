#include<stdio.h>
int main()
{
char str[100]; 
char *ptr;  
int v,c;  

printf("enter a string: ");
gets(str);

ptr=str;  

v=c==0;
while(*ptr!='\0')  
{
	
if(*ptr=='A' ||*ptr=='E' ||*ptr=='I' ||*ptr== 'O' ||*ptr=='U' ||*ptr=='a' ||*ptr=='e' ||*ptr=='i'||*ptr=='o' ||*ptr=='u')
v++;  
else
c++ ; 
ptr++;    
}

printf("Total number of vowels : %d\nTotal number of consonants : %d\n",v,c);
return 0;
}