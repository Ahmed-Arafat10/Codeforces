//https://codeforces.com/contest/1557/problem/B
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t, n, k;
    cin>>t;
    while(t--)
    {
        ll cnt = 1;
        cin>>n>>k;
        ll arr[n],arr2[n];
        for(ll i = 0; i<n; i++)
        {
            cin>>arr[i];
            arr2[i] = arr[i];
        }
        if(n == 1)
        {
            cout<<"Yes\n";
            continue;
        }
        sort(arr2,arr2+n);
        map<ll,ll>mp;
        for(ll i = 0; i<n; i++)mp[ arr2[i] ] = i+1;
        for(ll i = 0; i<n; i++) arr[i] = mp[ arr[i] ] ;
        for(ll i = 1; i<n; i++)
        {
            if(arr[i] - arr[i-1] != 1) cnt++;
        }
        if(cnt <= k) cout<<"YES\n";
        else cout<<"NO\n";

    }
}

/*
5 4
6 3 4 2 1
5 3 4 2 1
--
4 2
1 -4 0 -2
4 1  3  2
*/
