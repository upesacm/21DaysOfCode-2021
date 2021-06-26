#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
char s;
    int freq,arr[] ={0,0,0,0,0,0,0,0,0,0};
    while(scanf("%c", &s) == 1)
        if(s >= '0' && s <= '9')
            arr[s-'0']+=1;
                        
    for(freq=0;freq<10;freq++)
        printf("%d ",arr[freq]);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
