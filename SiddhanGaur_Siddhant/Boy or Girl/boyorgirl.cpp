// Boy or Girl
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int l=s.length();
    int c=0;
    for(int i=1; i<l; i++)
    {
        if(s[i]!=s[i-1])
            c++;
    }
    if(c&1)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    return 0;
}