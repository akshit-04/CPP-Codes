#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
vector<long double> v,crd;
int n;
bool intersection(long double t)
{
	long double mn=1.0e18,mx=1.0e-18;
	For(i,n)
	{
		long double left=crd[i]-t*v[i],right=crd[i]+t*v[i];
        mx=max(mx,left);
        mn=min(mn,right);
	}
	return mn>=mx;
}
int main()
{
    fast;
    int t=1;
    //cin>>t;
    while(t--)
    {
        //int n;
        cin>>n;
	    For(i,n)
        {
            int k;
            cin>>k;
            crd.pb(k);
        }
	    For(i,n)
		{
            int k;
            cin>>k;
            v.pb(k);
        }
	    double l=0,r=1e9;
	    For(i,60)
		{
            double mid=(l+r)/2;
		    if(intersection(mid))
			r=mid;
		    else
			l=mid;
	    }
	    cout<<setprecision(12)<<l;   
    }
    return 0;
    
}