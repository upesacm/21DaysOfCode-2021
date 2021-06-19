#include<stdio.h>
int main()
{
    int num,d;
    int i;
    
    scanf("%d %d",&num,&d);   //taking the input of size of array and number of rotations
    
    int arr[num];
    int farr[num];   //final array to be returned
    
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<num;i++)
    {
        farr[i]=arr[(d+i)%num];  //applying left rotation by applying the logic
    } 
    
    for(i=0;i<num;i++)
    {
        printf("%d ",farr[i]);     //printing the final array
    }
}