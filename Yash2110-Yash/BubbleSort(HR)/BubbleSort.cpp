#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int count=0,temp;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                count++;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;               
            }
        }
    }
    cout<<"Array is sorted in "<<count<<" swaps.";
    cout<<"\nFirst Element: "<<arr[0];
    cout<<"\nLast Element: "<<arr[n-1];

    return 0;
}
