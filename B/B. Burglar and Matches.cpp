//https://codeforces.com/contest/16/problem/B
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    vector< pair<ll,ll> >v1;
    ll n,m, res = 0;
    cin>>n>>m;
    for(ll i =0; i<m; i++)
    {
        ll x, y;
        cin>>x>>y;
        v1.push_back({y,x});
    }
    sort(v1.begin(),v1.end(),greater<>());
    //for(auto &it : v1) cout<<it.first<<" "<<it.second<<"\n";
    ll idx = 0;
    while(n != 0 && idx < v1.size())
    {
        //  cout<<"n->"<<n<<"\n";
        if(n > v1[idx].second)
        {
            res += (v1[idx].second * v1[idx].first);
            n -= v1[idx].second;
        }
        else if(n <= v1[idx].second)// 5 5
        {
            res += (n * v1[idx].first);
            n -= n;
        }
        idx++;
    }
    cout<<res;
}

/*
7 3
8 10
2 5
3 6
*/
