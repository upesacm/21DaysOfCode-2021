#include <stdio.h>
int end_term(int n, int a, int b, int c) 
{
  int i, d[50];
  d[1]=a;
  d[2]=b;
  d[3]=c;
  for(i=4;i<=n;i++)
  {
    d[i]=d[i-1]+d[i-2]+d[i-3];
  }
  return d[n];
}

int main() 
{
    int n, a, b, c;
  
    scanf("%d", &n);
    scanf("%d %d %d", &a, &b, &c);
    int m = end_term(n, a, b, c);
    printf("%d", m); 
    return 0;
}