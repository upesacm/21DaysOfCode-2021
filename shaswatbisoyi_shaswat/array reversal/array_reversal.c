#include<stdio.h>
#include<stdlib.h>

void array_rev(int arr[],int start,int end){
	int swap=0;
	while (start<end){
		swap=arr[start];
		arr[start]=arr[end];
		arr[end]=swap;
		start++;
		end--;
	}
}
void arr_print(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
}


int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    arr_print(arr, n);
    array_rev(arr, 0, n-1);
    printf("\n");
    arr_print(arr, n);   
    return 0;
}


