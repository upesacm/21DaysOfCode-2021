//Finding the value for alpha and beta for a quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float d,e,x1,x2;
    printf("Enter the values of the coefficients of the quadratic equation of the for Ax^2+Bx+C=0\nA=");
    scanf("%d",&a);
    printf("B=");
    scanf("%d",&b);
    printf("C=");
    scanf("%d",&c);
    printf("Quadratic formula => x = (-b+_root(d))/2a ; d=(b*b)-(4ac)\n");
    d=(b*b)-(4*a*c);
    printf("d= %f",d);
    if(a!=0 && d==0)
      printf("\nRoots are real and equal");
    else if(d<0)
      printf("\nRoots are imaginary");
    else if(d>0)
      printf("\nRoots are real");
    e=sqrt(d);
    printf("\ne= %f",e);
    x1= (-b+e)/(2*a);
    x2= (-b-e)/(2*a);
    printf("\nRoots of the equation are- \nx1= %f \nx2= %f",x1,x2);
    return 0;
}