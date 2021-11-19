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
        int n,m,r,c;
        cin>>n>>m>>r>>c;
        int a,b,k,d;
        a=(r-1)+(c-1);
        b=(m-c)+(n-r);
        k=(r-1)+(m-c);
        d=(n-r)+(c-1);
        cout<<max(max(a,b),max(k,d))<<"\n";


    }
    
    
    
    return 0;
    

    
    

    
    
}