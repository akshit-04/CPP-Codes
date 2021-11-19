#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define pb push_back
const int N = 1e5+1;

int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        
        ll n;
        cin>>n;
        ll a[n],b[n],c[n];
        ll d[n];
        For(i,n)
        cin>>a[i];

        For(i,n)
        cin>>b[i];
        c[0]=a[0];
        for(int i=1;i<n;i++)
        {
            c[i]=max(c[i-1],a[i]);
        }
        d[0]=b[0]*a[0];
        for(int i=1;i<n;i++)
        {
            ll h=c[i]*b[i];
            d[i]=max(d[i-1],h);
        }
        //sort(b,b+n);
        //ll m=0;
        cout<<d[0]<<"\n";
        for(int i=1;i<n;i++)
        {
            ll m=a[i]*b[i];
            cout<<max(d[i],m)<<"\n";
        }
    }
    
}