#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n, m, cnt = 0;
    cin>>n>>m;
    map<ll, vector<ll>>mp;
    for(ll i = 0; i<m; i++)
    {
        ll a, b;
        cin>>a>>b;
        mp[a].push_back(b);
        mp[b].push_back(a);
    }
    bool flag = true;
    while(flag)
    {
        unordered_map<ll,ll>Del;
        bool noneed = true;
        for(auto &it : mp)
        {
            if(it.second.size() == 1)
            {
                Del[it.first]++;
                noneed = false;
            }
        }
        if(Del.size() >= 1)
        {
            for(auto &it : Del)
            {
                mp.erase(it.first);
            }
            for(auto &it : mp)
            {
                for(auto &it2 : Del)
                {
                    if(find(mp[it.first].begin(),mp[it.first].end(),it2.first) != mp[it.first].end())
                    {
                        mp[it.first].erase(find(mp[it.first].begin(),mp[it.first].end(),it2.first));
                    }
                }
            }
        }
        if(Del.size() >= 1) cnt++;
        if(mp.empty() || noneed) flag = false;
    }
    cout<<cnt;
}
