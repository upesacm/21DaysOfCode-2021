#include <iostream>

using namespace std;

int main() 
{
    int n,summ=0;
    cout<<"Ente the value till which you want to enter the number";
    cin>>n;
    int arr[n];
    int sum_n=0;
    int x;
    cout<<"\nEnter the numbers in the array(total n-1 numbers)";
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
       
    for(int i=0;i<n-1;i++)
    {
        summ = summ + arr[i];
    }
    
    // First we will find sum of n natural numbers
    //Then find sum of the array
    //Then subtract both the sums
    
    sum_n = (n*(n+1))/2;
    x = sum_n-summ;

    cout<<"\nThe missing number is as follows:"<<x;

    return 0;
}
