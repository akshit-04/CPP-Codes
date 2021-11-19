#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define pb push_back
const int M = 200001;
char arr[1111][1111];
int a[101],r[10001],ans[10001];
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        ll sum=0,a1=0,a2=0;
        bool flag=true;
        For(i,n)
        {
            cin>>a[i];
            sum+=(a[i]+x-1)/x;
            if(a[i]%x)
            a1+=a[i];
            else
            {
                a2+=a[i];
            }
            
            
        }
        int ans=0;
        if(a1)
        ans+=(a1+x-1)/x;
        ans+=(a2/x);
        cout<<ans<<" "<<sum<<"\n";
        
    }
    
    return 0;  
}