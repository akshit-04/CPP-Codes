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
        int n;
        cin>>n;
        set<ll> s;
		int temp=0;
		for(ll i=2;i*i<=n;i++)
        {
			if(n%i==0)
            {
				s.insert(i);
				n/=i;
				temp=i;
				break;
			}
		}
		if(temp==0){
			cout<<"NO\n";
			continue;
		}
		for(ll i=temp+1;i*i<=n;i++)
        {
			if(n%i==0)
            {
				s.insert(i);
				n/=i;
				temp=i;
				break;
			}
		}
		s.insert(n);
		if(s.size()==3){
			cout<<"YES\n";
			for(auto& i:s)
            {
				cout<<i<<" ";
			}
			cout<<"\n";
		}
		else{
			cout<<"NO\n";
		}
    }

    return 0;
    
}