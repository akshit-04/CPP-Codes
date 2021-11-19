#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define pb push_back
const int N = 1e5+1;
bool check(ll k, ll n)
{
    ll sum=0,temp=n;
    while(temp>0)
    {
        ll j=min(temp,k);
        sum+=j;
        temp-=j;
        temp-=temp/10;
    }
    return sum*2>n;
}
int main()
{
    ll n;
    cin>>n;
    ll left=1,right=n,ans=n;
    while(left<=right)
    {
        ll m=left+(right-left)/2;
        if(check(m,n))
        {
            ans=m;
            right=m-1;

        }
        else
        {
            left=m+1;
        }
        
    }
    cout<<ans;
}