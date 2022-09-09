//https://codeforces.com/contest/47/problem/B
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll A = 0, B = 0, C = 0;
void solve(char c)
{
    if(c == 'A') A++;
    else if(c == 'B') B++;
    else C++;
}
int main()
{
    string str[3];

    for(ll i = 0; i<3; i++)
    {
        cin>>str[i];
        if(str[i][1] == '>')
        {
            solve(str[i][0]);
        }
        else
        {
            solve(str[i][2]);
        }
    }

    if(A==B || A==C)
    {
        cout<<"Impossible";
        return 0;
    }
    set<pair<ll,char>>s1;
    s1.insert({A,'A'});
    s1.insert({B,'B'});
    s1.insert({C,'C'});
    for(auto &it:s1) cout<<it.second;
    //cout<<A<<" "<<B<<" "<<C<<" ";
}

/*
A>B
C<B
A>C
*/
