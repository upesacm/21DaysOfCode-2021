//Vector erase
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;
int main() 
{
    int n,a,o,p,size;
    cin>>n;
    vector<int>m;
    for(int i=0;i<n;i++)
        {
        int x;
        cin>>x;
        m.push_back(x);
        }
    cin>>a;
    cin>>o;
    cin>>p;
    m.erase(m.begin()+a-1);
    m.erase(m.begin()+o-1,m.begin()+p-1);
    size=m.size();
    cout<<size<<endl;
    for(int i=0;i<size;i++)
        cout<<m[i]<<" ";
    return 0;
}