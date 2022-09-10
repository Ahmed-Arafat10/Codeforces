//https://codeforces.com/contest/476/problem/B

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
char c[10];
static ll sz = 0, correct = 0;
void Generate(ll n,ll limit, ll neededPlus,ll neededMinus)
{
    if(n == limit)
    {
        sz++;
        ll  cntPlus = 0, cntMinus = 0;
        for(ll i =0; i<limit; i++)
        {
            if(c[i] == '-')cntMinus++;
            else cntPlus++;
            //cout<<c[i];
        }
        if(cntPlus == neededPlus && cntMinus == neededMinus)correct++;
        return;
    }
    c[n] = '+';
    Generate(n+1,limit,neededPlus,neededMinus);
    c[n] = '-';
    Generate(n+1,limit,neededPlus,neededMinus);
}
int main()
{
    cout<<fixed<<setprecision(12);
    string s1,s2;
    cin>>s1>>s2;
    unordered_map<char,ll>mp1;
    unordered_map<char,ll>mp2;
    for(ll i =0; i<s1.size(); i++)
    {
        mp1[ s1[i] ] ++;
    }
    for(ll i = 0; i<s2.size(); i++)
    {
        mp2[ s2[i] ] ++;
    }
    if(mp1 == mp2)
    {
        cout<<1.0;
        return 0;
    }
    else
    {
        if(mp1['+'] == 0 && mp2['+'] || mp1['-'] == 0 && mp2['-'])
        {
            cout<<0.0;
            return 0;
        }
    }
    ll neededPlus = abs(mp1['+'] - mp2['+']), neededMinus = abs(mp1['-'] - mp2['-']);
    //cout<<neededPlus<<" "<<neededMinus;
    Generate(0,mp2['?'], neededPlus, neededMinus);
    cout<<1.0*correct/sz;
}