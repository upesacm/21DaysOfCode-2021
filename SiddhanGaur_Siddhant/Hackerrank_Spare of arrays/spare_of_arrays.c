//Sparse Arrays
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
    int N, Q; 
    char *N_array[50], *Q_array[50];
    scanf("%d", &N);
    for (int j = 0; j < N; j++) {
        char s[21];
        scanf("%s", s); 
        N_array[j] = malloc(21);
        strcpy(N_array[j], s);
    }
    scanf("%d", &Q);
    for (int i = 0; i < Q; i++) 
    {
        int occurs = 0, result;
        char s[21];
        scanf("%s", s);
        Q_array[i] = malloc(21);
        strcpy(Q_array[i], s);
        for (int m = 0; m < N; m++) {
            result = strcmp(Q_array[i], N_array[m]);
            if (result == 0) 
            occurs++;
        }
        printf("%d\n", occurs);
    }
    
    return 0;
}