#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define pb push_back
const int N = 1e6+1;
char arr[1111][1111];
//int a[101],r[10001],ans[10001];
int main()
{
    fast;
    int t=1;
    //cin>>t;
    while(t--)
    {
        ll l,r,x,y,k;
        cin>>l>>r>>x>>y>>k;
        bool flag=false;
        for(ll i=x;i<=y;i++)
        {
            ll j=i*k;
            if(j>=l && j<=r)
            {
                flag=true;
                break;
            }
        }
        if(flag)
        cout<<"YES";
        else
        {
            cout<<"NO";
        }
        
        
        
    }
    
    return 0;  
}