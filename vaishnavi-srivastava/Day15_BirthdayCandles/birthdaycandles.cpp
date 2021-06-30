//Birthday Candles
#include<iostream>
using namespace std;
void selectionSort(int candles[50], int num) 
{
   int i, j, least, temp;
   for (i=0 ; i<num-1 ; i++) 
   {
      least=i;
      for(j=i+1 ; j<num ; j++)
      if(candles[j]<candles[least])
        least=j;
      temp=candles[i];
      candles[i]=candles[least];
      candles[least]=temp;
   }
}
int main()
{
    int candles[50],num,count=0;
    cout<<"Enter the number of candles you want-";
    cin>>num;
    cout<<"Enter the height of the "<<num<<" candles-"<<endl;
    for(int i=0 ; i<num ; i++)
       {
           cin>>candles[i];
       }
    selectionSort(candles,num);
    cout<<"Height of the candles in increasing order is-";
    for(int i=0 ; i<num ; i++)
       {
           cout<<candles[i]<<" ";
       }
    cout<<endl<<"Therefore, the maximum hieght is-"<<candles[num-1]<<endl;
    for(int i=0 ; i<num ; i++)
       {
           if(candles[i]==candles[num-1])
             count++;
       }
    cout<<"Candles with maximum height are-"<<count;
    return 0;
}