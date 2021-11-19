#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define pb push_back
const int MOD = 1000000007;
char arr[1111][1111];
int a[101],r[10001],ans[10001];
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,up=0,d=0,r=0,l=0;
        cin>>x>>y;
        string s;
        cin>>s;
        For(i,s.size())
        {
            if(s[i]=='U')
            up++;
            else if(s[i]=='D')
            d++;
            else if(s[i]=='R')
            r++;
            else
            {
                l++;
            }
            
        }
        if(x>=0 && y>=0)
            {
                if(r>=x && up>=y)
                cout<<"YES\n";
                else 
                cout<<"NO\n";
            }
        else if(x<=0 && y>=0)
        {
            if(l>=abs(x) && up>=y)
            cout<<"YES\n";
            else
            {
                cout<<"NO\n";
            }
            
        }
        else if(x<=0 && y<=0)
        {
            if(l>=abs(x) && d>=abs(y))
            cout<<"YES\n";
            else
            {
                cout<<"NO\n";
            }
            
        }
        else
        {
            if(r>=x && d>=abs(y))
            cout<<"YES\n";
            else
            {
                cout<<"NO\n";
            }
            
        }
        
    }
    
    return 0;  
}