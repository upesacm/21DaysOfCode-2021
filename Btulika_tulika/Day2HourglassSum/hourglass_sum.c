#include <stdio.h>
#define R 6
#define C 6
int hourglassSum(int arr[R][C])
{
    int i, j, sum;
    if (R < 3 || C < 3)
        return -1;
    int max_sum=0;
   for (i = 0; i < R - 2; i++) {
        for (j = 0; j < C - 2; j++) {
            
            sum = (arr[i][j] + arr[i][j + 1]
                 + arr[i][j + 2])
                + (arr[i + 1][j + 1])
                + (arr[i + 2][j] + arr[i + 2][j + 1]
                    + arr[i + 2][j + 2]);

            if (sum > max_sum)
                max_sum = sum;
            else
                continue;
        }
    }
    return max_sum;
}

int main()
{   int arr[R][C];
      for(int i=0; i<6; i++) {
        for(int j=0;j<6;j++) {
         scanf("%d", &arr[i][j]);
     }
    
   }

    int res = hourglassSum(arr);
    if (res == -1)
        printf("Not Possible");
    else
        printf("%d", res);
    return 0;
}