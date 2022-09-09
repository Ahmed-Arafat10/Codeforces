//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/E
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll x;
void solve(ll n)
{
    if(n == 0) return;
    ll bit = n & 1;
    solve(n>>1);
    cout<<bit;
}

int main()
{
    ll t;
    scanf("%lld",&t);
    while(t--)
    {

        ll n;
        scanf("%lld",&n);
        solve(n);
        puts("");
    }
}

-----------------------------------------------------------------------
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll x;
void solve(ll n)
{
    if(n == 0) return;
    solve(n/2);
    if(n & 1) cout<<1;
    else cout<<0;
}

int main()
{
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        solve(n);
        puts("");
    }
}
