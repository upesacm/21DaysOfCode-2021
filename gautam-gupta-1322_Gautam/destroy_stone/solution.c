#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x;
    scanf("%d",&x);
    int ans[x];
    for(int i=0;i<x;i++)
    {
        int min2=0,max2=0;
        int y;
        scanf("%d",&y);
        int arr[y];
        int max=0,min=0;
        for(int j=0;j<y;j++)
        {
            scanf("%d",&arr[j]);
            if(arr[max]<=arr[j])
                max=j;
            if(arr[min]>arr[j])
                min=j;
        }
        min++,max++;
        min2=y-min+1;
        max2=y-max+1;
        if(min<=y/2&&max<=y/2)
        {
            if(min>=max)
                ans[i]=min;
            else
                ans[i]=max;
        }
        else if(min>y/2&&max>y/2)
        {
            if(min2>=max2)
                ans[i]=min2;
            else
                ans[i]=max2;
        }
        else {
            int maxs=0;
            if(min+max2>min2+max)
                maxs=min2+max;
            else
                maxs=min+max2;
            if(min2>max2)
            {
                if(maxs>min2)
                    maxs=min2;
            }
            else if(max2>min2)
            {
                if(maxs>max2)
                    maxs=max2;
            }
            else if(max>min)
            {
                if(maxs>max)
                    maxs=max;
            }
            else if(min>max)
            {
                if(maxs>min)
                    maxs=min;
            }
            ans[i]=maxs;
        }
    }
    for(int i=0;i<x;i++)
    {
        printf("%d\n",ans[i]);
    }
    return 0;
}