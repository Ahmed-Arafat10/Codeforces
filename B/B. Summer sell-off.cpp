//https://codeforces.com/contest/810/problem/B
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n, f, res = 0 , sum = 0;
    cin>>n>>f;
    vector<pair<ll,ll>>v;
    priority_queue<ll> pq;
    map<ll,ll>mp1;
    for(ll i = 0; i<n; i++)//O(n)
    {
        ll x, y;
        cin>>x>>y;
        res +=  min(x,y);
        if(y>x)
        {
             ll temp = min((x*2*1LL),y) - min(x,y);
             pq.push(temp) ;//O(log n)
        }
    }
    while(!pq.empty())//O(f)
    {
        if(f != 0)
        {
            //cout<<pq.top().first<<" "<<pq.top().second<<"\n";
            res += pq.top();
            f--;
            pq.pop();
        }
        else break;
    }
    cout<<res;
}

/*
4 2
2 1 1
3 5 5
2 3
1 5
--
5 3
5 1
3 2
1 2
*/
