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
        ll sum=0,mx=0;
        cin>>n;
        ll a[n],b[n];
        vector<pair<ll,ll>> v(n);
        For(i,n)
        {
            cin>>a[i];
            mx=max(a[i],mx);
        }
        For(i,n)
        {
            cin>>b[i];
            sum+=b[i];
        }
        For(i,n)
        v.pb(mp(a[i],b[i]));
        sort(v.begin(),v.end());
        ll mn=min(sum,mx);
        for(auto& i:v)
        {
            sum=sum-i.second;
            //cout<<sum<<" ";
            mn=min(max(sum,i.first),mn);
        }
        cout<<mn<<"\n";
    }
    return 0;
    
}