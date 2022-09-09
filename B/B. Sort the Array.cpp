//https://codeforces.com/contest/451/problem/B
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
bool IsSorted(ll arr[], ll sz)
{
    for( ll i =1; i<sz; i++)
    {
        if(arr[i-1] > arr[i]) return 0;
    }
    return 1;
}
int main()//O(N log N)
{
    ll n, cnt = 0;
    cin>>n;
    ll arr[n],arr2[n];
    pair<ll,ll>p;
    for(ll i = 0; i<n; i++)
    {
        cin>>arr[i];
        arr2[i] = arr[i];
    }
    sort(arr2,arr2+n);
    for(ll i = 0; i<n; i++)
    {
        if (arr[i] != arr2[i])
        {
            if (cnt == 0)
            {
                p.first = i;
                cnt++;
            }
            else
            {
                p.second = i;
                cnt++;
            }
        }
    }
    if(cnt == 0)
    {
        cout<<"yes\n1 1";
        return 0;
    }
    reverse(arr+(p.first),arr+(p.second+1));
    if(IsSorted(arr,n))
    {
        cout<<"yes\n";
        cout<<p.first+1<<" "<<p.second+1;
    }
    else     cout<<"no\n";
}

/*
4
2 1 3 4
--
yes
1 2
--
--
4
3 1 2 4
no
*/
