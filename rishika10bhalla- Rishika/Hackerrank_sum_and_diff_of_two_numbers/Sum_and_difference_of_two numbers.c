#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a;
    int b;
    float c;
    float d;
    scanf("%d %d ",&a ,&b);
    scanf("%f %f",&c,&d);
    /*printf("%d",(a+b));
    printf("%d",(a-b));
    printf("%f",(a+b));
    printf("%f",(a-b));*/
    printf("%d %d \n",(a+b),(a-b));
    printf("%.1f %.1f",(c+d),(c-d));

    return 0;
}