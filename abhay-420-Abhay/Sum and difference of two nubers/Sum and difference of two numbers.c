#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float f,g;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&f,&g);
    
    printf("%d %d \n",(a+b),(a-b));
    printf("%.1f %.1f",(f+g),(f-g));
    
    return 0;
}
