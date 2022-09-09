#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
//Recursively No Loops
ll n,m;
char Grid[11][11];
unordered_map<ll,ll>mpR;
unordered_map<ll,ll>mpC;
ll cnt = 0;
void IO(ll R,ll C,char Type)// 0 0
{

    if(R == n) return;
    if(C == m)
    {
        if(Type == 'O') puts("");
        IO(R+1,0,Type);
    }
    else
    {
        if(Type == 'I')
        {
            scanf("\n%c",&Grid[R][C]);
            if(Grid[R][C] == 'B')
            {
                mpR[R]++;
                mpC[C]++;
            }
        }
        else if(Type == 'O') printf("%c",Grid[R][C]);
        else if(Grid[R][C] != 'Y') cnt++;
        IO(R,C+1,Type);
    }
}
void Change(char T,ll line, ll x)
{
    if(T == 'R')
    {
        if(x == m)return;
        Grid[line][x] = 'Y';
        Change(T,line,x+1);
    }
    else
    {
        if(x == n)return;
        Grid[x][line] = 'Y';
        Change(T,line,x+1);
    }
}
void solve(ll r, ll c)
{
    if(r == n) return;
    if(c == m)solve(r+1,0);
    else
    {
        if(mpR[r] == 0) Change('R',r,0);
        if(mpR[c] == 0) Change('C',c,0);
        solve(r,c+1);
    }

}
int main()
{
    scanf("%lld%lld",&n,&m);
    //printf("%lld%lld",n,m);
    IO(0,0,'I');
    printf("------------------\n");
    IO(0,0,'O');
    printf("------------------\n");
    solve(0,0);
    //cout<<"good";
    IO(0,0,'O');
    printf("------------------\n");
    IO(0,0,'C');
    cout<<cnt;
}
/*
3 4
BWWW
WWWW
WWBW

O/P: 4

*/

