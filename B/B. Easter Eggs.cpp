//https://codeforces.com/contest/78/problem/B
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
bool check(string str)
{
    for(ll i = 0; i<str.size(); i++)
    {

        if(i == (str.size() - 3))
        {
            if(str[i] == str[i+1] || str[i] == str[i+2] || str[i] == str[0]) return 0;
        }
        else  if(i == (str.size() - 2))
        {
            if(str[i] == str[i+1] || str[i] == str[0] || str[i] == str[1]) return 0;
        }
        else  if(i == (str.size() - 1))
        {
            if(str[i] == str[0] || str[i] == str[1] || str[i] == str[2]) return 0;
        }
        if(str[i] == str[i+1] || str[i] == str[i+2] || str[i] == str[i+3]) return 0;
    }
    return 1;
}
int main()
{
    string color = "ROYGBIV", res = "";
    ll n;
    cin>>n;
    if(n == 7)
    {
        cout<<"ROYGBIV";
        return 0;
    }
    res += color;
    while(res.size() != n)
        for(ll i = 0; i<color.size(); i++)
        {
            for(ll j =0; j<res.size(); j++)
            {
                string temp = res;
                temp.insert(j,1,color[i]);
                if(check(temp))
                {
                    //  cout<<"this is temp "<<temp<<"\n";
                    res.insert(j,1,color[i]);
                    break;
                }
            }
            if(res.size() == n) break;
        }
//string str = "ROYGBIV";
//str.insert(0,1,'a');
    cout<<res;
}

/*
ROYGBIV-
*/
