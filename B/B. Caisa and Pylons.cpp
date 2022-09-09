//https://codeforces.com/contest/463/problem/B
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n, dollar = 0, energy =0;
    cin>>n;
    ll arr[n];
    for( ll i =0; i<n; i++)
    {
        cin>>arr[i];
    }
    for( ll i =0; i<n; i++)
    {
        if(i == 0)
        {
            dollar += arr[i];
            continue;
        }
        if(arr[i] > arr[i-1])
        {
            ll diff = arr[i] - arr[i-1];// 3 2 4
            if(diff > energy)
            {
                dollar += (diff - energy);
                energy = 0;
            }
            else energy -= diff;
        }
        else if(arr[i] < arr[i-1]) energy += (arr[i-1] - arr[i]);
    }
    cout<<dollar;

}

/*
7 3
8 10
2 5
3 6
*/
OR
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n, mx = INT_MIN;
    cin>>n;
    ll arr[n];
    for( ll i =0; i<n; i++)
    {
        cin>>arr[i];
        mx = max(mx,arr[i]);
    }
    cout<<mx;
}

/*
7 3
8 10
2 5
3 6
*/