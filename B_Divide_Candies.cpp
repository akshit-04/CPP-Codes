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
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        ll ans=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;i<=i;j++)
            {
                ll a=(ll)((ll)(i*i)+(ll)(j*j));
                if(a>=m)
                {
                    if(a%m==0)
                    {
                        if(i==j)
                        ans++;
                        else
                        {
                            ans+=2;
                        }
                        
                    }
                }
            }
        }
        cout<<ans;
    }
    
    return 0;  
}