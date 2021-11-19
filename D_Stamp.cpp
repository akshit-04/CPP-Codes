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
        ll n,m;
        cin>>n>>m;
        ll a[m];
        VL v;
        For(i,m)
        cin>>a[i];
        if(m==n)
        {
            cout<<0;
            return 0;
        }
        if(m==0)
        {
            cout<<1;
            return 0;
        }
        sort(a,a+m);
        
        if(a[0]>1)
        v.pb(a[0]-1);
        if(a[m-1]<n)
        v.pb(n-a[m-1]);
        for(ll i=1;i<m;i++)
        {
            if(a[i]-a[i-1]-1>0)
            v.pb(a[i]-a[i-1]-1);

        }
        sort(v.begin(),v.end());
        ll cnt=1;
        ll s=v.size();
        for(ll i=1;i<s;i++)
        {
            if(v[i]%v[0]==0)
            cnt+=(v[i]/v[0]);
            else
            {
               cnt+=(v[i]/v[0])+1; 
            }
            
        }
        cout<<cnt;
        
        
    
    return 0;  
}