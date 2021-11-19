#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int N = 1000010;
char arr[1111][1111];
int main()
{
    fast;
    ll u,v;
    cin>>u>>v;
    ll ans=0;
	while(u!=0 && v!=0)
	{
		if(u > v)
			swap(u,v);
		ans+=v/u;
		v%=u;
	}
	cout << ans << endl;
    
    
  
    
    
}