//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/T
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
map<pair<ll,ll>,ll>memo;
ll nPr1(ll n,ll r)
{
    if(n == 0 && r == 0)return 1;
    if(r < 0 || r > n) return 0;
    if((n-1) == (r-1) || r-1 == 0 ) memo[ {n-1,r-1}] = 1;
    if((n-1) == r || r == 0 ) memo[ {n-1,r}] = 1;
    ll t1 = memo[ {n-1,r-1}],  t2 = memo[ {n-1,r}];
    if(t1 == 0) t1 = nPr1(n-1,r-1);
    if(t2 == 0) t2 = nPr1(n-1,r);
    memo[ {n,r}] = t1 + t2;
    return memo[ {n,r}] ;

}
ll fact(ll n)
{
    if(n <= 1) return 1;
    return 1LL * fact(n-1) * n;
}
ll nPr2(ll n,ll r)
{
    ll t1,t2,t3;
    t1= fact(n);

    t2= fact(r);
    t3= fact(n-r);
    return t1/(1LL*t2*t3);

}
int main()
{
    ll n,r;
    scanf("%lld%lld",&n,&r);
    printf("%lld",nPr1(n,r));
}
/*
*/
------------------------------------------------
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll nPr1(ll n,ll r)
{
    if(n == 0 && r == 0)return 1;
    if(r < 0 || r > n) return 0;
    if(n == r || r == 0 ) return 1;
    return nPr1(n-1,r-1) + nPr1(n-1,r);

}
ll fact(ll n)
{
    if(n <= 1) return 1;
    return 1LL * fact(n-1) * n;
}
ll nPr2(ll n,ll r)
{
    ll t1,t2,t3;
    t1= fact(n);

    t2= fact(r);
    t3= fact(n-r);
    return t1/(1LL*t2*t3);

}
int main()
{
    ll n,r;
    scanf("%lld%lld",&n,&r);
    printf("%lld",nPr1(n,r));
}
/*
*/
