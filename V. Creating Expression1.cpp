//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/V
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll arr[21];
ll N,X;
bool flag = false;
ll res = 0;
void solve(ll n, ll j)
{

    if(n == 0) res += arr[n];
    else
    {
        if(j & 1) res += arr[n];
        else res -= arr[n];
    }
    if(n == (N-1))
    {
        if(res == X) flag = true;
        //cout<<"n=N ->"<<res<<"\n";
        return;
    }
    solve(n+1,1);
    res -= arr[n+1];
    solve(n+1,2);
    res += arr[n+1];
}
int main()
{
    scanf("%lld%lld",&N,&X);
    for(ll i = 0; i<N; i++) scanf("%lld",&arr[i]);

    solve(0,1);
    if(flag)printf("YES");
    else printf("NO");
}
/*
5 5
1 2 3 4 5
----
5 2
1 2 3 4 5
----
2 1
1 2
*/
