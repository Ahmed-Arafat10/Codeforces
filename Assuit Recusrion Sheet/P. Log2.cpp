//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/P
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
static ll cnt = 0;
void Log(ll n)
{
    if(n == 1) return;
    cnt++;
    Log(n>>1);
}
int main()
{
    ll n;
    scanf("%lld",&n);
    Log(n);
    printf("%lld",cnt);
}
/*
1
--
0

8
--
3
*/

