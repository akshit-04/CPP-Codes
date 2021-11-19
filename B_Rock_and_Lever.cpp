#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
ll setB(ll n) 
{ 
    if (n == 0) 
        return 0; 
  
    ll msb = 0; 
    n = n / 2; 
    while (n != 0) { 
        n = n / 2; 
        msb++; 
    } 
  
    return ( msb); 
} 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); 
    int t;
    cin>>t;
    while(t--)
    {
        map<ll,ll> map;
        int n;
        cin>>n;
        ll a[n];
        For(i,n)
        {
            cin>>a[i];
            map[setB(a[i])]++;
        }
        ll ans=0;
        for(auto& i:map)
        {
            ll te=i.second;
            ans+=(te*(te-1))/2;
        }
        cout<<ans<<endl;


        
        
    }
    
}