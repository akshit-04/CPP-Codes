#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n-1;i++)
#define VI vector<int>
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
    fast;
    int t=1;
    //cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(1000);
        v[0]=1;
        v[1]=1;
        ll a;
        for(int i=2;v[i-1]<=n;i++)
        {
            v[i]=v[i-1]+v[i-2];
            a=i;
        }
        cout<<a-2;

        
        
        
    }
    return 0;
    
}