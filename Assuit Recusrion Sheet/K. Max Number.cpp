//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/K
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
static ll mx = INT_MIN;
ll n;
void solve(ll arr[],ll nn)
{
    mx = max(arr[nn], mx);
    if(nn == (n-1)) return;
    solve(arr,nn+1);
}

int main()
{
    scanf("%lld",&n);
    ll arr[n];
    for(ll i =0; i<n; i++) scanf("%lld",&arr[i]);
    solve(arr,0);
    cout<<mx;
}

---------------------------------------------------------------------
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
static ll mx = INT_MIN;
ll n;
void solve(ll arr[],ll nn)
{
    mx = max(arr[nn], mx);
    if(nn == 0) return;
    solve(arr,nn-1);
}

int main()
{
    scanf("%lld",&n);
    ll arr[n];
    for(ll i =0; i<n; i++) scanf("%lld",&arr[i]);
    solve(arr,n-1);
    cout<<mx;
}
