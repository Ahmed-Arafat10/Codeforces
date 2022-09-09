//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void Recursion(ll n, ll b)
{
    if (n == 0) return;
    Recursion(n-1,b);
    cout<<n;
    if(n != b) puts("");
}

int main()
{
    ll n;
    cin>>n;
    Recursion(n,n);
}
