//Check if the given number is a palindrome or not
#include<stdio.h>
int main()
{
    int num,temp,temp1,count=0,i,digit[10],num2[10],j,flag=0;
    printf("Enter number-");
    scanf("%d",&num);
    temp=num;
    temp1=num;
    while(temp!=0)
         {
            temp=temp/10;
            count++;
         }
    printf("Digits in the number=%d\n",count);
    while(temp1!=0)
         {
            for(i=0 ; i<count ; i++)
                {
                    digit[i]=temp1%10;
                    temp1=temp1/10;
                    printf("Digits=%d ; ",digit[i]);
                }
         }
    for(j=0,i=(count-1) ; j<count,i>=0 ; j++,i--)
       {
           //printf("Loop1 working");
           //for(i=count ; i>=0 ; i--)
              //{
                   num2[j]=digit[i];
                  printf("%d %d = %d %d \n",i,j,digit[i],num2[j]);
              //}
       }
    for(j=0 ; j<count ; j++)
       printf("%d",num2[j]);
    printf("\n");
    for(i=0 ; i<count ; i++)
       printf("%d",digit[i]);
    printf("\n");
    for(i=0 ; i<count ; i++)
       {
           if(digit[i]==num2[i])
             flag=1;
       }
    printf("flag= %d",flag);
    if(flag==1)
      printf("The given number is a palindrome");
    else
      printf("The given number is not a palindrome");
    return 0;
}