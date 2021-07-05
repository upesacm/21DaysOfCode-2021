#include<iostream>
using namespace std;
int main()
{
    int s[50], size;
    float neg=0, pos=0, zero=0, p, n, z;
    cout<<"Enter the size- ";
    cin>>size;
    cout<<"Enter the array- ";
    for(int i=0 ; i<size ; i++)
       cin>>s[i];
    for(int i=0 ; i<size ; i++)
        {
            if(s[i]>0)
              pos++;
            else if(s[i]<0)
              neg++;
            else if(s[i]==0)
              zero++;
        }
    cout<<"Total element= "<<size<<endl;
    cout<<"Positive numbers= "<<pos<<endl;
    cout<<"Negative numbers= "<<neg<<endl;
    p=pos/size;
    n=neg/size;
    z=zero/size;
    cout<<"Ratio of zeroes= "<<z<<endl;
    cout<<"Ratio of positive numbers= "<<p<<endl;
    cout<<"Ratio of negative numbers= "<<n<<endl;
    return 0;
}