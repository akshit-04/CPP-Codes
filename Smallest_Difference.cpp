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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        For(i,n)
        cin>>a[i];
        int ans,m=INT_MAX;
        For(i,n-1)
        {
            if(abs(a[i]-a[i+1])<=m)
            ans=abs(a[i]-a[i+1]);
        }
        int sum=INT_MAX,an,b;
        For(i,n-1)
        {
            if(abs(a[i]-a[i+1])==ans)
            {
                if(a[i]+a[i+1]<sum)
                {
                    an=a[i];
                    b=a[i+1];
                }
            }
        }
        cout<<an<<" "<<b<<"\n";
        
    }
    return 0;  
}
 