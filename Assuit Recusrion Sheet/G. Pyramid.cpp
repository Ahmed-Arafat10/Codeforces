//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/G
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void Pyramid(ll n,ll b)
{
    if (n == 0)return;
    for(ll i =0; i<n-1; i++) printf(" ");
    for(ll i =0; i<b; i++) printf("*");
    if(n != 1) puts("");
    Pyramid(--n,b+2);
}

int main()
{
    ll n;
    cin>>n;
    Pyramid(n,1);
}
