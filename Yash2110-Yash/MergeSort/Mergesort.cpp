#include<iostream>
using namespace std;

/*
FOR MERGE SORT WE NEED TWO FUNCTIONS 
    -> MERGESORT FUNCTION(to divide the array into two sorted arrays) 
    -> MERGE FUNCTION (to merge the two sorted arrays)
*/


void merge(int arr[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;

    int a[n1];    //temperory arrays to store the two sorted parts of the original array
    int b[n2];  

    for(int i=0;i<n1;i++)
    {
        a[i]=arr[l+i];
    }

    for(int i=0;i<n2;i++)
    {
        b[i]=arr[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            k++;
            i++; 
        }
        else
        {
            arr[k]=b[j];
            k++;
            j++;
        }
    }

    while(i<n1)
    {
        arr[k]=a[i];
            k++;
            i++; 
    }

    while(j<n2)
    {
         arr[k]=b[j];
            k++;
            j++;
    }

}
void Merge_sort(int arr[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        Merge_sort(arr,l,mid);
        Merge_sort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }


}


//main function

int main()
{
    int n;
    cout<<"Enter the number of elements you want to enter in the array\n";
    cin>>n;
    int arr[n];

    cout<<"\nEnter the elements of the array:";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    Merge_sort(arr,0,n);
    cout<<"\nThe sorted array is as follows:";

        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        return 0;
}