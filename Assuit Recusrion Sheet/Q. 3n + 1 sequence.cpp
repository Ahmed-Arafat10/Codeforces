//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Q
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
static ll cnt = 1;
void solve(ll n)
{
    if(n == 1) return;
     cnt++;
    if(n & 1)solve(1LL*3*n+1);
    else solve(n>>1);

}
int main()
{
    ll n;
    scanf("%lld",&n);
    solve(n);
    printf("%lld",cnt);
}
