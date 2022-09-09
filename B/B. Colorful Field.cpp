//https://codeforces.com/contest/79/problem/B
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int n,m, k, t ,temp;
    cin>>n>>m>>k>>t;
    set<pair<ll,ll>>WasteCord;
    map<pair<ll,ll>,ll>WasteCordOrder;
    temp = k;
    while(temp--)//O(k)
    {
        ll r, c;
        cin>>r>>c;
        WasteCord.insert({r,c});//O(log k)
    } // --> O(k log k)
    ll cnt = 0;
    for(auto &it : WasteCord)//O(k)
    {
        WasteCordOrder[ {it.first,it.second}] = ++cnt; //O(log k)
    }// --> O(k log k)
    while(t--)//O(t)
    {
        ll curRow, curCol;
        cin>>curRow>>curCol;
        ll NoOfSteps = ( (curRow-1) * m) + curCol;
        ll NoOfWaste = 0;
        auto it = WasteCord.lower_bound({curRow,curCol});//O(log k)
        if ((*it).first == curRow && (*it).second == curCol)
        {
            cout<<"Waste\n";
            continue;
        }
        if (it == WasteCord.end())NoOfWaste = k;
        else
        {
            NoOfWaste = WasteCordOrder[ {(*it).first,(*it).second}] ;//O(log k)
            --NoOfWaste;
        }
        ll Distance = NoOfSteps - NoOfWaste;
        if(Distance % 3 == 1) cout<<"Carrots\n";
        else if(Distance % 3 == 2) cout<<"Kiwis\n";
        else if(Distance % 3 == 0) cout<<"Grapes\n";
    } // --> O(t log k)




}

/*
1 - 4 - 7 - 10 - 13  --> num % 3 == 1
2 - 5 - 8 - 11 - 14  ---> num % 3 == 2
3 - 6 - 9 - 12 - 15  ---> num % 3 == 0
4 5 5 6
4 3
1 3
3 3
2 5
3 2
1 3
1 4
2 3
2 4
1 1
1 1
---
Waste
Grapes
Carrots
Kiwis
Carrots
Carrots
*/
