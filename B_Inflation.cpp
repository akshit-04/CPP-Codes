#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define pb push_back
const int n = 1e6;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        ll p[n];
        For(i,n)
        {
            cin>>a[i];
            //p[i]=0;
            if(i>0)
            p[i]=a[i]+p[i-1];
            else
            p[i]=a[i];
        }
        //float m=100.0/(float)k;
        //cout<<m<<"\n";
        ll sum=a[0],ans=0;
        For(i,n-1)
        {
            ans=max(ans,(a[i+1]*100+k-1)/k-sum);
            sum+=a[i+1];
                
        }
        cout<<ans<<"\n";

    }
}