#include<stdio.h>
int main()
{
 float p,c,b,m,co,per;
 printf("enter marks for physics,chemistry,biology,maths and computer respectively");
 scanf("%f%f%f%f%f",&p,&c,&b,&m,&co);
 per= p+c+b+m+co;
 per=per/5;
 
 if(per>=90)
 {
 	printf("GRADE A");
 	
 }
 if((per<90)&&(per>=80))
 {
 	printf("GRADE B");
 	
 }
	if((per<80)&&(per>=70))
	{
		printf("GRADE C");
		
	}
	
		if((per<70)&&(per>=60))
	{
		printf("GRADE D");
		
	}
	
    	if((per<60)&&(per>=40))
	{
		printf("GRADE E");
		
	}
    if(per<40)
{
	printf("GRADE F");
	}    
return 0;




}
