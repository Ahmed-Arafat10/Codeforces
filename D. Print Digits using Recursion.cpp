//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void Recursion(ll n,ll b)
{
    if (n <= 9)
    {
        cout<<n<<" ";
        return;
    }
    ll temp = n%10;
    Recursion(n/10,b);
    cout<<temp;
    if(n != b) cout<<" ";
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        Recursion(n,n);
        if(t != 0) puts("");
    }
}

