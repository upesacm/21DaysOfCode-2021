#include<stdio.h> 
#include<math.h> 
int main() 
{    
      int a[5][5];    
      int i,j,b,c;    
     for(i=0;i<5;i++)    
     for(j=0;j<5;j++)          
        scanf("%d",&a[i][j]);    
    for(i=0;i<5;i++)    
    for(j=0;j<5;j++)   
   {         
         if(a[i][j]!=0)       
          {            
               b=i;             
               c=j;       
         }    
   }       
    b=fabs(b-2);        
    c=fabs(c-2);   
    printf("%d\n",b+c);    
    return 0; 
}
