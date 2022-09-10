//https://codeforces.com/contest/707/problem/A
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n, m;
    cin>>n>>m;
    char arr[n][m];
    for(ll i = 0; i<n; i++)
    {
        for(ll j =0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(ll i = 0; i<n; i++)
    {
        for(ll j = 0; j<m; j++)
        {
            if(arr[i][j] != 'B' && arr[i][j] != 'G' && arr[i][j] != 'W')
            {
                cout<<"#Color";
                return 0;
            }
        }
    }
    cout<<"#Black&White";
}