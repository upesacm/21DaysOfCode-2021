#include<iostream>
using namespace std;
int difference(int array[100][100], int size)
{
    int d1=0, d2=0, diff;
    for(int i=0 ; i<size ; i++)
       {
           for(int j=0 ; j<size ; j++)
              {
                  if(i==j)
                    d1=array[i][j]+d1;
              }
       }
    cout<<"Sum of D1 elements= "<<d1<<endl;
    for(int i=0 ; i<size ; i++)
       {
           for(int j=0 ; j<size ; j++)
              {
                  if(i+j==(size-1))
                  { 
                    d2=array[i][j]+d2;
                  }
              }
       }
    cout<<"Sum of D2 elements= "<<d2<<endl;
    if(d1>d2)
      diff=d1-d2;
    else
      diff=d2-d1;
    return diff;
}
int main()
{
    int array[100][100], size, diff;
    cout<<"Enter the desired size of the array- ";
    cin>>size;
    cout<<"Enter the array- ";
    for(int i=0 ; i<size ; i++)
       {
           for(int j=0 ; j<size ; j++)
              {
                 cin>>array[i][j];
              }
       }
    diff=difference(array, size);
    cout<<"Difference of the diagonals= "<<diff;
    return 0;
}