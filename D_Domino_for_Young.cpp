#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define pb push_back
const int MOD = 1000000007;
char arr[1111][1111];
int a[101],r[10001],ans[10001];
int main()
{
    fast;
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        ll k=0,ans=0;
        For(i,n)
        {
            cin>>a[i];
            k+=a[i];
            if(i%2)
            ans+=a[i]/2;
            else
            {
                ans+=(a[i]+1)/2;
            }
            
        }
        cout<<min(k,k-ans);
    }
    
    return 0;  
}