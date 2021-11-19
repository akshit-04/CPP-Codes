#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int N = 1000010;
int cnt[N],arr[N];
int main()
{
    fast;
    int t=1;
    //cin>>t;
    while(t--)
    {
       int n,m,mx1=0,mn1=INT_MAX,mx2=0,mn2=INT_MAX;
       cin>>n;
       For(i,n)
       {
           int a,b;
           cin>>a>>b;
           mn1=min(b,mn1);
           mx1=max(mx1,a);
       }
       int x=0,y=0;
       cin>>m;
       For(i,m)
       {
           int a,b;
           cin>>a>>b;
           mx2=max(a,mx2);
           mn2=min(mn2,b);
       }
       if(mn1<=mx2)
       x=mx2-mn1;
       if(mn2<=mx1)
       y=mx1-mn2;
       
       cout<<max(x,y);
       
    }

    return 0;
    
}