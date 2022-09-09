//https://codeforces.com/contest/227/problem/B
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll n, m, Vasya = 0, Petya = 0;
    cin>>n;
    map<ll,ll> mp;
    ll arr[100005];
    for(ll i = 0; i<n; i++)
    {
        ll x;
        cin>>x;
        // mp[x] = i;
        arr[x] = i;
    }
    cin>>m;
    for(ll i = 0; i<m; i++)
    {
        ll q;
        cin>>q;
        //ll idx = mp[q];
        ll idx = arr[q];
        Vasya += (idx - 0) + 1;
        Petya += ((n-1) - idx) + 1;
    }
    cout<<Vasya<<" "<<Petya;
}

/*
3
3 1 2
3
1 2 3
*/
