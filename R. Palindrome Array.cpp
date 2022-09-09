//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/R
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
bool solve(ll *arr,ll l,ll r)
{
    if(arr[l] != arr[r]) return 0;
    if(l >= r) return 1;
    solve(arr,l+1,r-1);
}
int main()
{
    ll n;
    scanf("%lld",&n);
    ll arr[n];
    for(ll i = 0; i<n; i++) cin>>arr[i];
    cout<<(solve(arr,0,n-1)? "YES":"NO");
}
