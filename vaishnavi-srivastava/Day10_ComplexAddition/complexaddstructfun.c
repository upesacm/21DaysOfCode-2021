#include<stdio.h>
struct complex
{
    int a;
    int b;   
}number1,number2,sum;
void add(struct complex number1,struct complex number2,struct complex sum)
{
    printf("Enter the value of 'a' for number1: ");
    scanf("%d",&number1.a);
    printf("Enter the value of 'b' for number1: ");
    scanf("%d",&number1.b);
    printf("Enter the value of 'a' for number2: ");
    scanf("%d",&number2.a);
    printf("Enter the value of 'b' for number2: ");
    scanf("%d",&number2.b);
    printf("First complex number = %d + %di\n",number1.a,number1.b);
    printf("Second complex number = %d + %di\n",number2.a,number2.b);
    sum.a=number1.a+number2.a;
    sum.b=number1.b+number2.b;
    printf("Sum of the complex numbers = %d + %di\n",sum.a,sum.b);
}
int main()
{
    add(number1,number2,sum);
    return 0;
}
