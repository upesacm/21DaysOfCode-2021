#include <iostream>
using namespace std;

int main(){

    int t;
    scanf("%d", &t);

    while(t--){
        string s;
        cin >> s;
        long long a = 0, b = 0, c = 0, n = s.length();

        for(int i = 0; i < n; i++){
            if(s[i] == '0')
                b = i + 1;
            else if(s[i] == '1')
                c = i +1;
            a += i - min(b,c) + 1;
            swap(b,c);
        }

        printf("%lld\n", a);
    }
    return 0;
}