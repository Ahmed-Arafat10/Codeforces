//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/M
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
static ll sum = 0;
ll n,m;
void solve(ll arr[],ll idx)
{
    ll diff = n - m;
    if(diff <= idx)sum += arr[idx];
    if(idx == 0) return;
    solve(arr,idx-1);
}

int main()
{
    scanf("%lld",&n);
    scanf("%lld",&m);
    ll arr[n];
    for(ll i =0; i<n; i++) scanf("%lld",&arr[i]);
    solve(arr,n-1);
    cout<<sum;
}
