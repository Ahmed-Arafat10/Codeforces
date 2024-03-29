//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/O
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll solve(ll n)
{
    if(n <= 1 ) return 0;
    if(n == 2) return 1;
    return solve(n-2) + solve(n-1);
}
int main()
{
    ll n;
    scanf("%lld",&n);
    printf("%lld",solve(n));
}
------------------------------------------------------------------------
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll fib[31];
ll solve(ll n)
{
    ll t0, t1;
    if(fib[n] != -1) return fib[n];
    if(n <= 1)
    {
        fib[0] = 0;
        fib[1] = 0;
        return fib[n];
    }
    if(n == 2)
    {
        fib[n] = 1;
        return fib[n];
    }
    if(fib[n-2] != -1) t1 = fib[n-2];
    else  t1 = solve(n-2);
    if(fib[n-1] != -1) t0 = fib[n-1];
    else  t0 = solve(n-1);
    fib[n] = t0 + t1;
    return fib[n];
}
int main()
{
    memset(fib,-1,sizeof(fib));
    ll n;
    scanf("%lld",&n);
    printf("%lld",solve(n));
}