#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1000000007;
char arr[1111][1111];
int main()
{
    fast;
    int n,ob=0,orr=0,eb=0,er=0;
    string s;
    cin>>n>>s;
    For(i,n)
    {
        if(i%2)
        {
            if(s[i]=='r')
            orr++;
            else
            {
                ob++;
            }
            
        }
        else
        {
            if(s[i]=='r')
            er++;
            else
            {
                eb++;
            }
        }
        
    }
    int ans1=0,ans2=0;
    if(orr<=ob)
    {
        ans1=max(orr,eb); 
    }
    else
    {
        ans1=max(ob,er);
    }
    if(er<=eb)
    {
        ans2=max(er,ob); 
    }
    else
    {
        ans2=max(eb,orr);
    }
    cout<<min(ans1,ans2);
    
    

    return 0;
}