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
    int t=1;
    //cin>>t;
    //while(t--)
    //{
        int n,m;
        cin>>n>>m;
        int a[n][m];
        For(i,n)
            For(j,m)
                cin>>a[i][j];
        if(n==1)
        {
            int mn=INT_MAX;
            For(j,m)
            mn=min(a[0][j],mn);
            cout<<mn;
            return 0;
        }
        else if(m==1)
        {
            int mn=INT_MIN;
            For(i,n)
            mn=max(a[i][0],mn);
            cout<<mn;
            return 0;
        }
        else
        {
            int mx=INT_MIN;
        For(i,n)
        {
            int mn=INT_MAX;
            For(j,m)
            {
                mn=min(a[i][j],mn);
            }
            mx=max(mn,mx);
        }
        cout<<mx;
        return 0;
        }
        
        
        

    //}
    
    
    
    return 0;
    

    
    

    
    
}