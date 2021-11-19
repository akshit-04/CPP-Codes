#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll sum=0;
        ll a[n];
        For(i,n)
        {
            cin>>a[i];
            sum+=a[i];
        }
        ll ans=(sum+n-2)/(n-1)*(n-1);
        cout<<max(ans, *max_element(a, a+n)*(n-1))-sum<<"\n";
        
        
        
        
    }
	return 0;
}
  