#include<iostream>
using namespace std;
int main()
{
    int array[50], min=0, max=0, size;
    cout<<"Enter the size- ";
    cin>>size;
    cout<<"Enter the array- ";
    for(int i=0 ; i<size ; i++)
       cin>>array[i];
    int i, j, least, temp;
    for(i=0 ; i<(size-1) ; i++) 
       {
          least=i;
          for(j=i+1 ; j<size ; j++)
          if(array[j]<array[least])
            least=j;
          temp=array[i];
          array[i]=array[least];
          array[least]=temp;
       }
    cout<<"Array in ascending order= ";
    for(int i=0 ; i<size ; i++)
       cout<<array[i]<<" ";
    for(int i=0 ; i<(size-1) ; i++)
           min=array[i]+min;
    for(int i=1 ; i<size ; i++)
           max=array[i]+max;
    cout<<endl<<"Minimum Sum= "<<min;
    cout<<endl<<"Maximum Sum= "<<max;
    return 0;
}