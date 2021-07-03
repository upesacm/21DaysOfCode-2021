//Football
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, m=0;
    cin>>n;
    string team, win;
    while (n--)
    {
        if (m!=0)
        {
            cin >> team;
            if (team == win)
            {
                m += 1;
            }
            else
            {
                m -= 1;
            }
        }
        else
        {
            cin >> win;
            m = 1;
        }
    }
    cout<<win<<endl;
    return 0;
}