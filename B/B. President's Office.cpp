//https://codeforces.com/contest/6/problem/B
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void FILL(char arr[105][105])
{
    for(ll i =0; i<105; i++)
    {
        for(ll j = 0 ; j<105 ; j++)
        {
            arr[i][j] = '@';
        }
    }
}
int main()
{
    char Grid[105][105] ;
    FILL(Grid);
    ll n,m;
    cin>>n>>m;
    char c;
    cin>>c;
    unordered_map<char,ll>mp;
    for(ll i =1; i<=n; i++)
    {
        for(ll j = 1 ; j<=m ; j++)
        {
            cin>>Grid[i][j];
        }
    }
    for(ll i =1; i<=n; i++)
    {
        for(ll j = 1 ; j<=m ; j++)
        {
            if(Grid[i][j] == c)
            {
                char cUP = Grid[i-1][j];
                char cDown = Grid[i+1][j];
                char cRight = Grid[i][j+1];
                char cLeft = Grid[i][j-1];
                if(cUP != c && cUP != '.' && cUP != '@')mp[cUP]++;
                if(cDown != c && cDown != '.' && cDown != '@')mp[cDown]++;
                if(cRight != c && cRight != '.' && cRight != '@')mp[cRight]++;
                if(cLeft != c && cLeft != '.' && cLeft != '@')mp[cLeft]++;
            }
        }

    }
//    for(auto &it: mp)
//    cout<<it.first<<"->"<<it.second<<"\n";
    cout<<mp.size();
}

/*
3 4 R
G.B.
.RR.
TTT.

2
*/
