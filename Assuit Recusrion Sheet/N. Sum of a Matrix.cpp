//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/N
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
//Input of 2D-arrays as well as sum is recursively
ll n,m;
ll arr1[101][101],arr2[101][101];
void solveIO(ll arr[][101],ll idxN,ll idxM)// 0 0
{
    if(idxN == n) return;
    if(idxM == m) solveIO(arr,idxN+1,0);
    else
    {
        scanf("%lld",&arr[idxN][idxM]);
        //printf("%lld",arr[idxN][idxM]);
        solveIO(arr,idxN,idxM+1);
    }
}
void solveSum(ll idxN,ll idxM)// 0 0
{
    if(idxN == n) return;
    if(idxM == m)
    {
        if(idxN != (n-1)) puts("");
        solveSum(idxN+1,0);
    }
    else
    {
        ll sum = arr1[idxN][idxM] + arr2[idxN][idxM];
        printf("%lld ",sum);
        solveSum(idxN,idxM+1);
    }
}
int main()
{
    scanf("%lld",&n);
    scanf("%lld",&m);
    solveIO(arr1,0,0);
    solveIO(arr2,0,0);
    solveSum(0,0);
}
/*
2 3
1 2 3
4 5 6
1 3 5
7 9 11
-------
2 5 8
11 14 17
*/
