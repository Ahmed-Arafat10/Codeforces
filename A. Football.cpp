#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n;
    cin>>n;
    unordered_map<string, ll>mp;
    while(n--)
    {
        string str;
        cin>>str;
        mp[str]++;
    }
    if(mp.size() == 1)
    {
        cout<<mp.begin()->first;
        return 0;
    }
    auto it1 = mp.begin();
    auto it2 = mp.begin();
    ++it2;
    if(it1->second > it2->second) cout<<it1->first;
    else cout<<it2->first;
}
//-------------------------------------------------------
//Another Solution
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n, temp, cnt1 = 0, cnt2 = 0;
    cin>>n;
    temp = n;
    string str1,str2;
    while(n--)
    {
        string str;
        cin>>str;
        if(n == (temp-1)) str1 = str;
        if(str != str1)str2 = str;
        if(str == str1) cnt1++;
        if(str == str2) cnt2++;
    }
    if(temp == 1)
    {
        cout<<str1;
        return 0;
    }
    if( cnt1 > cnt2 ) cout<<str1;
    else cout<<str2;
}
