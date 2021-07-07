#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size-";
    cin>>n;
    cout<<"Here's the pattern-"<<endl;
    for(int i=0;i<n;i++)
       {
         for(int j=n-i; j>1;j--) 
            cout<<' ';
         for(int j=i; j>=0;j--)
            cout<<"#";
        cout<<endl;         
       } 
    return 0;
}