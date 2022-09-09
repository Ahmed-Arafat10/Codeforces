//https://codeforces.com/contest/88/problem/B
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n, m, x, q, cnt = 0;
    string str;
    cin>>n>>m>>x;
    char arr[n][m];
    set<pair<ll,ll>> S;
    unordered_map<char,ll>DISTANCE;
    for(ll i = 0; i<n; i++)
    {
        for(ll j = 0; j<m; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j] == 'S') S.insert({i,j});
        }
    }
    for(ll i = 0; i<n; i++)
    {
        for(ll j = 0; j<m; j++)
        {
            ll mn = INT_MAX;
            for(auto &it:S)
            {
                double x1 = abs(i - it.first) ;
                double y1 = abs(j - it.second);
                double dist;
                dist = pow(x1, 2) + pow(y1, 2);
                dist = sqrt(dist);
                mn = min((ll)ceil(dist),mn);
            }
            if(DISTANCE[ arr[i][j] ] == 0) DISTANCE[ arr[i][j] ] = mn;
            else DISTANCE[ arr[i][j] ] = min(mn,DISTANCE[ arr[i][j] ]);
        }
    }
    cin>>q;
    cin>>str;
    for(ll i = 0; i<q; i++)
    {
        if(isupper(str[i]) && S.size() == 0)
        {
            cout<<-1;
            return 0;
        }
        char c = tolower(str[i]);
        if(DISTANCE.find(c) == DISTANCE.end())
        {
            cout<<-1;
            return 0;
        }
        if(islower(str[i])) continue;
        if(DISTANCE[c] > x ) cnt++;
    }
    cout<<cnt;
}
