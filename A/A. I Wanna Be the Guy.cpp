//https://codeforces.com/contest/469/problem/A
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
unordered_map<ll,ll>mp;
int main()
{

    ll n,p1,p2;
    cin>>n>>p1;
    for(ll i =0; i<p1; i++)
    {
        ll x;
        cin>>x;
        mp[x]++;
    }
    cin>>p2;
     for(ll i =0; i<p2; i++)
    {
       ll x;
        cin>>x;
        mp[x]++;
    }
   if(n == mp.size()) cout<<"I become the guy.";
   else cout<<"Oh, my keyboard!";


}