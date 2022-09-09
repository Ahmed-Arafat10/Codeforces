//https://codeforces.com/contest/102/problem/B
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    string str;
    ll cnt = 0;
    cin>>str;
    if (str.size() < 2)
    {
        cout << 0;
        return 0;
    }
    ll res = 11;
    while( res >= 10 )
    {
        res = 0;
        for(ll i =0; i<str.size(); i++)
        {
            res += (str[i] - '0');
        }
        str = to_string(res);
        cnt++;
        // cout<<res<<"\n";
    }
    cout<<cnt;
}

/*
7 3
8 10
2 5
3 6
*/