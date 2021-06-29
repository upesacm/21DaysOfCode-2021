//Problem beautiful year
#include <iostream>
using namespace std;
void main()
{
    int a,b,c,d,year;
    cin>>year;
    while (true)
    {
        year += 1;
        a = year/1000;
        b = year/100%10;
        c = year/10%10;
        d = year%10;
        if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            break;
        }
    }
    cout<<year<<endl;
}