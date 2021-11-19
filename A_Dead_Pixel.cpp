#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); 
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,x,y;
        cin>>b>>a>>x>>y;
        ll i,j,k,l,m,ans;
        i=(x*a);
        j=(b-1-x)*(a);
        k=y*b;
        l=(a-1-y)*(b);
        m=max(i,j);
        ans=max(m,max(k,l));
        cout<<ans<<endl;
    }
    
}