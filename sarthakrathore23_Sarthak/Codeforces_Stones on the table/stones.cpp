//Stones on the Table
#include <iostream>
#include<string>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c1=0,c2=0,c3=0;
    for(int i=1;i<n;i++)
    {
 	    if(s[i-1]==s[i])
 	    if(s[i]=='R')
            c1++;
 	    else if(s[i]=='G')
        {
 		    c2++;
 	    }
 	else if(s[i]=='B')
 	    c3++;
    }
    cout<<c1+c2+c3;
  	return 0;
}