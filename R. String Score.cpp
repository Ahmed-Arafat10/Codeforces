//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/R
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    ll n,score = 0;
    cin>>n;
    cin>>str;
    for(ll i =0; i<n; i++)
    {
        if(str[i] == 'V') score += 5;
        else if(str[i] == 'W') score += 2;
        else if(str[i] == 'X' && i != (n-1)) str[i+1] = '-';
        else if(str[i] == 'Y' && i != (n-1))
        {
            str += str[i+1];
            n++;
            str[i+1] = '-';
        }
        else if(str[i] == 'Z' && i != (n-1))
        {
            if(str[i+1] == 'V')
            {
                score /= 5;
                str[i+1] = '-';
            }
            if(str[i+1] == 'W')
            {
                score /= 2;
                str[i+1] = '-';
            }
        }

    }
    cout<<score;
}