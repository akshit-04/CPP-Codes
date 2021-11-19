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
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        ll sum=0;
        For(i,n)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%k)
        cout<<1<<"\n";
        else
        {
            cout<<0<<"\n";
        }
        
    }
    
    return 0;  
}