//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/L
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
static ll sum = 0;
ll n;
void solve(ll arr[],ll nn)
{
    sum += arr[nn];
    if(nn == 0) return;
    solve(arr,nn-1);
}

int main()
{
    scanf("%lld",&n);
    ll arr[n];
    for(ll i =0; i<n; i++) scanf("%lld",&arr[i]);
    solve(arr,n-1);
    cout<<sum;
}
