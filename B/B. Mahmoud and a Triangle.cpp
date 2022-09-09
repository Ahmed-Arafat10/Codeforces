// https://codeforces.com/contest/766/problem/B
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i = 0; i<n; i++) cin>>arr[i];//O(n)
    sort(arr,arr+n);//O(n log n)
    for(ll i = 0; i<n-2; i++)//O(n)
    {
        ll a = arr[i], b = arr[i+1], c = arr[i+2];
        if ((a + b) > c && (a + c) > b && (c + b) > a)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}

/*
5
1 5 3 2 4
-> YES
--
3
4 1 2
-> NO
*/
