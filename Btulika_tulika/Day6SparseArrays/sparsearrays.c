#include<stdio.h>
#include<string.h>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n,q,i,j;
    
    scanf("%d",&n);
    char arr1[n][100];
    for(i=0;i<n;i++)
    scanf("%s",arr1[i]);
    
    scanf("%d",&q);
    int flag[q];char arr2[q][100];
    for(i=0;i<q;i++)
    scanf("%s",arr2[i]);
    
    for(i=0;i<q;i++)
    {
        flag[i]=0;
        for(j=0;j<n;j++)
        {
            if(strcmp(arr2[i],arr1[j])==0)
            flag[i]+=1;
        }
        
    }
    for(i=0;i<q;i++)
        printf("%d\n",flag[i]);
    return 0;
}