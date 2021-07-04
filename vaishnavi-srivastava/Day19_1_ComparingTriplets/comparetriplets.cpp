#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
void comparison(int arr1[100], int arr2[100], int size)
{
    int arr[2], alice=0, bob=0;
    for(int i=0 ; i<size ; i++)
       {
           if(arr1[i]>arr2[i])
             alice++;
           else if(arr2[i]>arr1[i])
             bob++;
       }
    arr[0]=alice;
    arr[1]=bob;
    cout<<arr[0]<<" "<<arr[1];
}
int main()
{ 
    int size, arr1[50], arr2[50];
    cout<<"Enter the desired size-";
    cin>>size;
    cout<<"Enter Alice's triplet- ";
    for(int i=0 ; i<size ; i++)
       cin>>arr1[i];
    cout<<"Enter Bob's triplet- ";
    for(int i=0 ; i<size ; i++)
       cin>>arr2[i];
    comparison(arr1,arr2,size);
    return 0;
}
    
    