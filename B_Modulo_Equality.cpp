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
        int a[n],b[n];
        For(i,n)
        cin>>a[i];
        For(i,n)
        cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        ll ans=10000000000000000;
        For(i,n)
        {
            ll x;
            if(a[i]>b[0])
            x=m-a[i]+b[0];
            else
            {
                x=b[0]-a[i];
            }
            bool flag=true;
            For(j,n)
            {
                if((a[(i+j)%n]+x)%m != b[j])
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            ans=min(ans,x);
            
        }
        cout<<ans<<"\n";
        
    }
    
    return 0;  
}