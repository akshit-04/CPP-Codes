#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); 
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    For(i,n)
    cin>>a[i];
    ll ans;
    sort(a.begin(),a.end(),greater<int>());
    for(int i=1;i<n;i++)
    {
        ans=a[i-1]-a[i];
        if(ans>k)
        {
            ans=0;
            cnt++;
            
        }
    }

    
}