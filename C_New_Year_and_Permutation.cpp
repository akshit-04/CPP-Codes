#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); 
	int n,m;
	cin>>n>>m;
	vector<ll> fac(250001);
	fac[0]=1;
	for(int i=1;i<250001;i++)
		fac[i]=(fac[i-1]*i)%m;
	ll ans=0;
	for(int i=0;i<n;i++)
		ans=(ans+(n-i)*((fac[i+1]*fac[n-i])%m))%m;
	cout<<ans;
	return 0;
}