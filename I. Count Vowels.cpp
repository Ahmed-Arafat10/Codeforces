//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
static ll cnt = 0;
void solve(string str,ll sz)
{
    if(sz == -1) return;
    solve(str,sz-1);
    char c = tolower(str[sz]);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') cnt++;
}

int main()
{
    string str;
    getline(cin,str);
    solve(str,str.size()-1);
    cout<<cnt;
}
// ['a', 'e', 'i', 'o', 'u'].
