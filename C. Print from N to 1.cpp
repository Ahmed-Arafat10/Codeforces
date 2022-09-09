//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void Recursion(ll n)
{
    if (n == 0) return;
    cout<<n;
    if(n != 1) cout<<" ";
    Recursion(n-1);
}

int main()
{
    ll n;
    cin>>n;
    Recursion(n);
}
