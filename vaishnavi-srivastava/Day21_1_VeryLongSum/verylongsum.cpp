#include<iostream>
using namespace std;
int arraysum(int long s[100], int size)
{
    int long total=0;
    for(int i=0 ; i<size ; i++)
           total=s[i]+total;
    return total;
}
int main()
{
    int long s[50], total=0; 
    int size;
    cout<<"Enter the size- ";
    cin>>size;
    cout<<"Enter the array- ";
    for(int i=0 ; i<size ; i++)
       cin>>s[i];
    total=arraysum(s,size);
    cout<<"Array Sum= "<<total;
    return 0;
}