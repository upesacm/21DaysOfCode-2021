// Exchange Two integer variable value without using third variable.


#include <stdio.h>
int main()
{
    int a=25, b=58;
    printf("Before swaping a=%d  b=%d\n" ,a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swaping a=%d  b=%d" ,a,b);
    return 0;
} 
