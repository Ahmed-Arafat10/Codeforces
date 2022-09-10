//https://codeforces.com/contest/208/problem/A
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    //WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB
    string str;
    cin>>str;
    if(str.size() < 3)
    {
        cout<<str;
        return 0;
    }
    string res;
    for(ll i = 0; i<str.size();)
    {
        if(str[i] == 'W')
        {
            string temp ;
            temp += str[i];
            ll n = i+1;
            while((n-i) != 3 && n < str.size())
            {
                if(str[n] == 'U' || str[n] == 'B') temp += str[n];
                else break;
                n++;
            }
            //cout<<temp<<" ";
            if(temp == "WUB")
            {
                //cout<<i;
                if(res.size() != 0)
                {
                    if(res[res.size()-1] != ' ')
                        res += ' ';
                }
                i = n;
                continue;
            }
            else
            {
                res += str[i];
                i++;
            }
        }
        else
        {
            res += str[i];
            i++;
        }


    }
    cout<<res;
}


//OR-------------------------------------------------------


#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    string str;
    cin>>str;
    if(str.size() < 3)
    {
        cout<<str;
        return 0;
    }
    ll t0 = 0,t1 = 1,t2 = 2;
    while(t2 <= str.size())
    {
        // cout<<str.size();
        if(str[t0] == 'W' && str[t1] == 'U' && str[t2] == 'B')
        {


            if(t0 == 0 && t1 == 1 && t2 == 2)
            {
                str.erase(str.begin()+t0,str.begin()+t2+1);
                //str[t2-2]= ' ';
            }
            else
            {
                str.erase(str.begin()+t0,str.begin()+t2);
                str[t2-2]= ' ';
            }
            //   cout<<str<<"  ";
            // system("pause");
        }
        else
        {
            t0++,t1++,t2++;
        }

    }
    for(ll i =1; i<str.size(); i++)
    {
        if(str[i] == str[i-1] && str[i] == ' ') str.erase(str.begin()+i,str.begin()+i+1);
    }
    cout<<str;
}
