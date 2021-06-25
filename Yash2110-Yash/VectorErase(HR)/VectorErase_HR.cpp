#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;




int main() {
   
    int n;
    cin>>n;
    vector<int> v;
    int x;
    
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
   
   int pos1;
   cin>>pos1;
   
   v.erase(v.begin()+pos1-1);
   
   int a,b;
   cin>>a>>b;
   
   
   v.erase(v.begin()+a-1,v.begin()+b-1);
   
   cout<<v.size()<<endl;
   
   for(int i=0;i<v.size();i++)
   {
       cout<<v[i]<<" ";
   } 
    return 0;
}

   
