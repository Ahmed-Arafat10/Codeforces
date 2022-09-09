//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<pair<ll,ll>>v1;
ll N,W;
ll res = INT_MIN;
ll sum = 0;
ll weight = 0;
void solve(ll n)
{
    if(n == N)return;
    for(ll i = n; i<N; i++)
    {
        weight += v1[i].first;
        sum += v1[i].second;
        if(weight <= W) res = max(sum,res);
        solve(i+1);
        weight -= v1[i].first;
        sum -= v1[i].second;
    }
}
int main()
{
    scanf("%lld%lld",&N,&W);
    for(ll i = 0; i<N; i++)
    {
        ll t1,t2;
        scanf("%lld%lld",&t1,&t2);
        v1.push_back({t1,t2});
    }
    solve(0);
    if(res == INT_MIN)printf("0");
    else printf("%lld",res);
}
/*
3 8
3 30
4 50
5 60
-----
6 15
6 5
5 6
6 4
6 6
3 5
7 2
*/
