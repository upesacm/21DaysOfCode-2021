#include<stdio.h>
#include<math.h>
int main()
{
    int num, count=0, digit[10], temp1, temp, i, amstrong=0, j;
    printf("Enter the number-");
    scanf("%d", &num);
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
             amstrong=amstrong+(pow(digit[i],count));
           }
      }
    if(num==amstrong)
      printf("\n%d is an amstrong number",num);
    else
      printf("\n%d is not an amstrong number",num);
    return 0;
}