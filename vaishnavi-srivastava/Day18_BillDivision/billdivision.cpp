#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

int main()
{
    //Enter your code here. Read input from STDIN. Print output to STDOUT 
    int s[50], total=0, size, k, b, bill=0, split=0;
    cout<<"Enter the number of items ordered- ";
    cin>>size;
    cout<<"Enter their prices- ";
    for(int i=0 ; i<size ; i++)
       cin>>s[i];
    cout<<"Enter the index value of the item that Anna did not eat- ";
       cin>>k;
    cout<<"Enter the amount Brian charger Anna- ";
       cin>>b;
    for(int i=0 ; i<size ; i++)
           total=s[i]+total;
    bill=total-s[k];
    split=bill/2;
    if(split==b)
      cout<<"Bon Appetit";
    else if(split>b)
      cout<<"Anna paid less. She needs to pay "<<split-b<<" more";
    else if(split<b)
      cout<<"Anna paid more. Brian needs to return "<<b-split;
    return 0;
}