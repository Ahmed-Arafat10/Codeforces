//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll n;
void solve(ll *arr,ll x)
{
    if(x == n) return;
    solve(arr,x+1);
    if(!(x & 1)) cout<<arr[x]<<" ";
}

int main()
{
    scanf("%lld",&n);
    ll arr[n];
    for(ll i =0; i<n; i++) scanf("%lld",&*(arr+i));
    solve(arr,0);
}
