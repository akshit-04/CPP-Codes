#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
    fast;
    int t=1;
    //cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        if(k<=n)
        {
            if(k%2)
            cout<<(ll)k/2<<"\n";
            else
            {
                cout<<((ll)k/2)-1;
            }
            
        }
        else
        {
            ll ans=k/2;
            if(n-ans>=0)
            cout<<n-ans;
            else
            {
                cout<<0;
            }
            
        }
        
        
        
        
        
    }

    return 0;
    
}