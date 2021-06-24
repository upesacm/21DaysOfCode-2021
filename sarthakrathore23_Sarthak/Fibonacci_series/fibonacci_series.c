 #include<stdio.h>
 int main()
 {
     int a=0, b=1, range, c;

     printf("Enter the range of Fibonacci series: ");
     scanf("%d",&range);

     while(a <= range)
     {
         printf("%d\t",a);
         c = a + b;
         a = b;
         b = c;
     }
    return 0;
 }