//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/S
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll n;
ll arr[101];
double sum = 0;
void INPUT(ll x)
{
    if(x == n) return;
    scanf("%lld",&arr[x]);
    INPUT(x+1);
}
void solve(ll x)
{
    if(x == n) return;
    //cout<<arr[x]<<"\n";
    sum += arr[x];
    solve(x+1);

}
int main()
{
    cout<<fixed<<setprecision(6);
    scanf("%lld",&n);
    INPUT(0);
    solve(0);
    printf("%f",1.0*sum/n);
}
/*
5
1 2 3 4 5
*/
