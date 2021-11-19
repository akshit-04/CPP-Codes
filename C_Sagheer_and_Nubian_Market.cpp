#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define pb push_back
const int N = 1e5+1;
int n,s,a[N];
ll b[N];
ll check(int k)
{
    For(i,n)
    b[i]=a[i]+(i+1)*(ll)k;
    nth_element(b, b+k, b+n);
    ll ans=0;
    For(i,k)
    ans+=b[i];
    return ans;
}
int main()
{
    cin>>n>>s;
    For(i,n)
    cin>>a[i];
    int l=0,r=n+1;
    while(l<r-1)
    {
        int m=l+(r-l)/2;
        if(check(m)<=s)
        l=m;
        else
        {
            r=m;
        }
        
    }
    cout<<l<<" "<<check(l);
}