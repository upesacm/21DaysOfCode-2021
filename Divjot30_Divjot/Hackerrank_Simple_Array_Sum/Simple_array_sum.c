#include <stdio.h>

int main(){
    int n;
    int i;
    scanf("%d", &n);
    int array[n];
    int sum_of_array = 0;
    
    for(i = 0; i < n; i++){
       scanf("%d", &array[i]);
       sum_of_array += array[i];
    }
    
    printf("%d\n", sum_of_array);
    return 0;
}
