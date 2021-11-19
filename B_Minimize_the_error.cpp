#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1000000007;
char arr[1111][1111];
int main()
{
    fast;
    int n,k1,k2;
    cin>>n>>k1>>k2;
    VL a(n),b(n);
    VL v(n);
    For(i,n)
    cin>>a[i];
    ll sum=0;
    For(i,n)
    {
        cin>>b[i];
        v[i]=abs(a[i]-b[i]);
    }
    int cnt=k1+k2;
    sort(v.begin(),v.end(),greater<int>());
    For(i,cnt)
    {
         v[0]=abs(v[0]-1);
         sort(v.begin(),v.end(),greater<int>());
    }
    For(i,n)
        sum+=(ll)(v[i]*v[i]);
    cout<<sum<<"\n";
    
    
    
    return 0;
    

    
    

    
    
}