#include<stdio.h>
int main(){
   int n,i,j;
   printf("Enter the value of n: ",n);
   scanf("%d",&n);
   for(i=0;i<n;i++){
      for(j=n;j>i;j--){
         printf("*");
      }
      printf("\n");
   }
   }