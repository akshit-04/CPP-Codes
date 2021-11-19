#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1e9+7;
//char arr[1111][1111];
//int a[101],r[10001],ans[10001];
// evon byross
int main()
{
    fast;
    int t;
    cin>>t;
    aa:while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        For(i,n)
        cin>>a[i];
        sort(a,a+n); 
        ll minn = a[0]*a[1] + abs(a[0]-a[1]);
		ll maxx = a[n-1]*a[n-2] + abs(a[n-1]-a[n-2]);
		cout<<max(minn,maxx)<<"\n";
        
    }
    return 0;  
}
 