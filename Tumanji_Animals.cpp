#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1000000007;
const int mx=1e4+1;
char arr[1111][1111];
//int a[101],r[10001],ans[10001];

int main()
{
    fast;
    int t=1;
    // cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int a[mx];
        For(i,mx)
        a[i]=0;
        For(i,n)
        {
            int k;
            cin>>k;
            a[k]++;
            
        }
        int ans,m=INT_MIN;
        for(int i=mx-1;i>=0;i--)
        {
            if(a[i]>=m)
            ans=i;
        }
        cout<<ans;
        
    }
    return 0;  
}
 