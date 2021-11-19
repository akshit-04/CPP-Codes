#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(ll i=1;i<=n;i++)
#define VI vector<int>
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0)

int main()
{
    fast;
    ll a,b,c,sum=0;
    ll M=998244353;
    cin>>a>>b>>c;
    ll i=(a*(a+1)/2)%M;
    ll j=(b*(b+1)/2)%M;
    ll k=(c*(c+1)/2)%M;
    ll ans=(((i*j)%M)*k)%M;
    cout<<ans;
        
        
        
        
    
    return 0;
    
}