//https://codeforces.com/contest/584/problem/A
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{

    ll n, t;
    cin>>n>>t;
    if(n == 1 && t >= 10)
    {
        cout<<-1;
        return 0;
    }
    else if(t == 10)
    {
        cout<<1;
        n--;
        while(n--)
        {
            cout<<0;
        }
    }
    else
    {
        while(n--)
        {
            cout<<t;
        }
    }
}
