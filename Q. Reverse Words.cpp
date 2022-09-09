//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Reverse(string str)
{
    reverse(str.begin(),str.end());
    cout<<str;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    getline(cin,str);
    string temp;
    for(ll i =0; i<str.size(); i++)
    {
        if(str[i] != ' ') temp += str[i];
        if(str[i] == ' ' && temp.size() != 0)
        {
            Reverse(temp);
            cout<<" ";
            temp="";
        }
    }
    if(temp.size() != 0) Reverse(temp);
}
