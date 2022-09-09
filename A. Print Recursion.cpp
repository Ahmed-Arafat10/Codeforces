//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void Recursion(ll n)
{
    if (n == 0) return;
    cout<<"I love Recursion";
    if(n != 1) puts("");
    Recursion(n-1);
}

int main()
{
    ll n;
    cin>>n;
    Recursion(n);
}
