#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
		cin>>n>>k;
		map<ll,ll> map;
		ll ans=0;
		for(ll i=0;i<n;i++)
		{
			ll l;
			cin>>l;
			if(l%k!=0)
			{
				map[k-l%k]++;
			}
		}
		for(auto i:map)
		{
		    ans=max(ans,i.first+(i.second-1)*k);
		}
		if(ans>0)
		cout<<ans+1<<"\n";	
		else
		cout<<0<<"\n";
        
        
        
        
    }
    return 0;
    
}