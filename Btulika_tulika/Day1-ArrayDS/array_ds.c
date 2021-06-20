#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n, *farr,*larr,i;
    scanf("%d", &n);
    farr = (int*) malloc(n * sizeof(int));
    for(i = 0; i < n; i++) {
        scanf("%d", farr + i);
    }
    larr = (int*) malloc(n * sizeof(int));
    for(i=1;i<=n;i++)
    {
        larr[i-1] = farr[n-i];
    }
    for(i = 0; i < n; i++)
        printf("%d ", *(larr + i));
    return 0;
}
