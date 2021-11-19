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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll dp[61];
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        dp[3]=4;
        for(int i=4;i<=n;i++)
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        cout<<dp[n]<<"\n";
    }
    
    
    
    return 0;
    

    
    

    
    
}