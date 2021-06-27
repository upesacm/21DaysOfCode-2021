#include <iostream>
using namespace std;

int diamond( int n) //Upper Half//
{ int a=0;
  
   for(int i=1; i<=n+1; i++)
   {
     for(int j=i; j<=n; j++)
     {
       cout<<" ";
     }
     for(int k=1; k<=2*i-1; k++)
     {
        if(k<i) 
        cout<<a++;
        else if(k==i) 
        cout<<a;
        else 
        cout<<--a;
      }
      cout<<"\n";
   }
   //Lower Half//
   for(int i=n; i>=1; i--)
   {
     for(int j=n; j>=i; j--)
     {
       cout<<" ";
     }
     for(int k=1; k<=2*i-1; k++)
     {
       if(k<i) 
        cout<<a++;
       else if(k==i) 
        cout<<a;
       else 
        cout<<--a;
     }
     cout<<"\n";
   }
}
int main()
{int n;
cout<<"Enter value of n:";
cin>>n;
int fin=diamond(n);
cout<<fin;
return 0;
}

