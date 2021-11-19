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
        int a,b,n;
        cin>>a>>b>>n;
        ll ans=1;
        while(a%2==0)
        {
            a/=2;
            ans*=2;
        }
        if(ans>=n)
        {
            cout<<"YES\n";
            continue;
        }
        while(b%2==0)
        {
            b/=2;
            ans*=2;
        }
        if(ans>=n)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        
    }
    
    return 0;  
}