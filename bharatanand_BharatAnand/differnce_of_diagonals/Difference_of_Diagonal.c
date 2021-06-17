/*Calculate the absolute difference between the 
sums of its diagonals for square matrix.
 For example, the square matrix arr is shown below: 1 2 3 4 5 6 9 8 9 
 The left-to-right diagonal = 1 + 5 + 9 = 15 . The right to left 
 diagonal = 3 + 5 + 9 = 17. Their absolute difference is |15 - 17| = 2.*/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main() {
 
    int N , a[100][100];
    scanf("%d",&N);
    int i,j,d1=0,d2=0;
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<N;i++)
        { 
      d1+=a[i][i];
        d2+=a[i][N-1-i];
       
    }
    int b=abs(d1-d2);
    printf("%d",b);
        
    
    return 0;
}

