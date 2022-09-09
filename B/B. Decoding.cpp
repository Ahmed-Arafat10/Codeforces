//https://codeforces.com/contest/746/problem/B
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll sz ;
    cin>>sz;
    string str ;
    cin>>str;
    if(sz <3)
    {
        cout<<str;
        return 0;
    }
    for(ll i = sz - 3; i>=0; i--)
    {
        ll rest = sz - (i+1);
        str.insert(i+(rest/2)+1,1,str[i]);
        str.erase(str.begin()+i);

    }
    cout<<str;
}

/*
5
logva
volga
--
4
abba
baba
*/
