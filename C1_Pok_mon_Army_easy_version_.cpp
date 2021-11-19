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
        int n,q;
        cin>>n>>q;
        vector<int> a(n+1);
        For(i,n)
        cin>>a[i];
        vector<int> copy(n+1);
		copy=a;
		sort(copy.begin(),copy.end());
		int fe=n-1,be=0;
		for(int i=1;i<n;i++){
			if(a[i]<a[i-1]){
				fe=i-1;
				break;
			}
		}
		for(int j=n-2;j>=0;j--){
			if(a[j]<a[j+1]){
				be=j+1;
				break;
			}
		}
		if(be<=fe){
			cout<<copy[n]<<"\n";
			continue;
		}
		bool temp=1;
		ll ans=0;
		for(int i=fe;i<=be;i++){
			if(temp){
				if(a[i+1]<a[i]){
					ans+=a[i];
					temp=0;
				}
			}
			else{
				if(a[i+1]>a[i]){
					ans-=a[i];
					temp=1;
				}
			}
		}
		cout<<ans<<"\n";
        
        
    }
    
}