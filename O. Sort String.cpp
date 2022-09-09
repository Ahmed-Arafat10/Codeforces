//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int arr[26];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    char str;
    for(int i =0; i<n; i++)
    {
        cin>>str;
        arr[str - 'a']++;
    }
    for(int i = 0; i<26; i++)
    {
        char c = (char)i+'a';
        while(arr[i]--)
        {
            cout<<c;
        }
    }
}
